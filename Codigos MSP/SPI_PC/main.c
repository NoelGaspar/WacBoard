#include <msp430.h> 

void spi_init(void);
void uart_init(void);
void dir_init(void);

char SPI_TXchar( unsigned char c );
void UART_TXchar( unsigned char c );
char UART_RXchar();



int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    dir_init();
    uart_init();
    spi_init();

    char pc_data;
	char spi_data;

	while(1){

		pc_data=UART_RXchar();



		if(pc_data==0x72){
			P1OUT|=BIT0;
			P4OUT&=~BIT7;
			spi_data=SPI_TXchar('r');
			UART_TXchar(spi_data);
			pc_data=0x00;
		}
		else if(pc_data==0x76){
			P1OUT&=~BIT0;
			P4OUT|=BIT7;
			spi_data=SPI_TXchar('v');
			UART_TXchar(spi_data);
			pc_data=0x00;
		}
		else{
			spi_data=SPI_TXchar(pc_data);
			UART_TXchar(spi_data);
			pc_data=0x00;
		}
	}

	return 0;
}



void dir_init(void){
	//LEDS
	P1DIR|=BIT0; //output
	P4DIR|=BIT7;

	P1OUT&=~BIT0;// COMIENZAN AMBOS LEDS APAGADOS
	P4OUT&=~BIT7;

	//PUERTOS SPI
     P3SEL |=BIT0+BIT1+BIT2;                       // P3.0 MOSI, P3.1 MISO y P3.2 CLK;

     // P2SEL|=BIT7;// NO  CS GPIO
	  P2SEL&=~BIT7;// CS GPIO
	  P2DIR|= BIT7; // P2.3 CS, setearlo como salida
	  P2OUT|= BIT7; // CS comienza prendido


	 //PUERTOS UART
	 P2DIR |= BIT2;                       	// P2.2 SMCLK set out to pins
	 P2SEL |= BIT2;
	 P4SEL |= BIT4 | BIT5; 					// P4.4 (TX), P4.5 (RX)
}




void spi_init(void){
	//PUERTO SPI UCB0
	UCB0CTL1|= UCSWRST;
	UCB0CTL0= UCSYNC+UCMODE_0+UCMSB+UCMST;// modo sincrono o spi+ SPI 3 CALBES, cs CONFIGURADO MANUALMENTE+MSB mode+ master mode
	UCB0CTL1=UCSSEL_2;					//sclk

	UCB0CTL1&= ~UCSWRST;				//set the state machile
	//UCB0IE|= UCRXIE;					//habilitar interrupciones
};


void uart_init(void){
	    //PUERTO UART UCA1
		UCA1CTL1 |= UCSSEL_2;                   	// SMCLK Clock Source (1MHz)
		UCA1BR0 = 104;                           	// 9600 (see User's Guide PAGINA 905)
		UCA1BR1 = 0;                           		//

		UCA1MCTL |= UCBRS_1 + UCBRF_0;				// Modulacion UCBRSx = 5 , UCBRFx = 0, UCOS16 = 0.
		UCA1CTL1 &= ~UCSWRST;               		// **Initialize USCI state machine
}


char SPI_TXchar( unsigned char c )
{

	P2OUT&=~BIT7;
	UCB0TXBUF = c;					// Enviamos el dato.

	while(!(UCB0IFG & UCRXIFG)); 	// Esperamos a que el dato se envíe y se reciba correctamente.
	P2OUT|=BIT7;
	char output =  UCB0RXBUF; 	// Leemos el bufer
	return output;
}


void UART_TXchar( unsigned char c )
{
	while (!(UCA1IFG & UCTXIFG)); //esperamos a que no hayan datos enviandose
	UCA1TXBUF = c;
}

char UART_RXchar()
{
	char out;
	while(!(UCA1IFG & UCRXIFG));
	out = UCA1RXBUF;

	return out;
}

