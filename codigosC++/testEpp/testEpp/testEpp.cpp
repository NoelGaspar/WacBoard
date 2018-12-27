// testEpp.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "dpcdecl.h"
#include "depp.h"
#include "dmgr.h"
#include "dpcutil.h"
#include "dpcdefs.h"

using namespace std;

static HIF hif = hifInvalid;
static HANDLE han = hifInvalid;
static ERC erc=0;
static int val=0;
//static char dato=0x00;

static int test(){
	 //tratamos de inicializar la comunicacion con el puerto EPP
	
	BYTE data[16];
	BYTE data2[16];
	int i =0;
	BYTE count=0x00;
	memset(data2,0x00,16);
	for(i=0;i<16;i++){
	 count=count+1;
		data[i]=count;

	}

	
	fprintf(stderr,"Iniciando\n");
    if(!DpcInit(&erc)) { 
        printf("No fue posible iniciar...\n");
        puts("presione una tecla para cerrar");
		getchar();
		return 0;
    }

	//una vez inicializado tratamos de abrir la comuniacion.
	fprintf(stderr,"Iniciado\nAbriendo\n");
	if(!DpcOpenData(&han, "Nexys2",&erc,NULL)) {  // Change to Basys2 for the other board.
        printf("DpcOpenData failed (revise si la tarjeta esta conectada)\n");
		DpcTerm();
        puts("presione una tecla para cerrar");
		getchar();
		return 0;
    } 


	// ya abierta la comunicación tratamos de enviar un dato al primer registro
    fprintf(stderr,"enviando dato de prueba\n");
	if(!DpcPutReg(han,0x00, 0x01, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		getchar();
		return 0;
	}
	puts("presione una tecla para cerrar");
	getchar();
		
    fprintf(stderr,"enviando dato de prueba\n");
	if(!DpcPutReg(han, 0x10, 0x02, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		char c=getchar();
		return 0;
	}
	puts("presione una tecla para cerrar");
	getchar();
		
	//DpcPutReg(HANDLE hif, BYTE bAddr, BYTE bData, ERC* perc, TRID *ptrid)
	fprintf(stderr,"enviando dato de prueba\n");
	if(!DpcPutReg(han, 0x20, 0x04, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		char c=getchar();
		return 0;
	}

	//// TRATAMOS DE ENVIAR UN BLOQUE DE 40 BYTES
	//fprintf(stderr,"enviado 16 datos");
	//if(!DpcPutRegRepeat(han,0x30, data,16,&erc, NULL)){
 //       printf("DpcPutRegRepeat failed.\n");
	//	puts("presione una tecla para cerrar");
	//	char c=getchar();
	//}

 // // TRATAMOS DE LEER UN BLOQUE DE 40 BYTES
	//fprintf(stderr,"leyendo datos. \n");
	//if(!DpcGetRegRepeat(han,0x30,data2,16,&erc, NULL)){
    //       printf("DpcGetRegRepeat failed.\n");
	//	puts("presione una tecla para cerrar");
	//	char c=getchar();
	//}
	//

	//for(int i=0;i<16;i++){
	//printf( "datos obtenidos:%x \n",data2[i]);
	//}


	fprintf(stderr,"dato enviado exitosamente. Cerrando\n");
    if( han != hifInvalid ) {
        DpcCloseData(han,&erc);
		DpcTerm();
		puts("presione una tecla para cerrar");
		char c=getchar();
		return 0;
    }
	return 1;
}

static int sendAdc(BYTE *datos){
		
	
	if(!DpcPutReg(han,0x00, 0x59, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		getchar();
		return 1;
	}
    
	if(!DpcPutReg(han,0x10, 0xff, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		getchar();
		return 1;
	}

	if(!DpcPutReg(han,0x20, 0x55, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		getchar();
		return 1;
	}

	Sleep(20);


	fprintf(stderr,"leyendo datos. \n");
	if(!DpcGetRegRepeat(han,0x30,datos,20,&erc, NULL)){
        printf("DpcGetRegRepeat failed.\n");
		puts("presione una tecla para cerrar");
		getchar();
		return 1;
	}

	return 0;

}

/*
Esta funcion envia comandos de forma completa. el formato es 
 1 addr:	0x00	dato: ctrl
 2 addr:	0x10	dato: confL
 3 addr:	0x20	dato: confH

*/
static int sendComnd(BYTE ctrl, BYTE confH,BYTE confL){ 
	
	if(!DpcPutReg(han,0x00, ctrl, &erc, NULL)){
        printf("DpcPutReg failed sending control word.\n");
		puts("presione una tecla para cerrar");
		getchar();
		return 1;
	}
    
	if(!DpcPutReg(han,0x10, confL, &erc, NULL)){
        printf("DpcPutReg failed sending config Low word.\n");
		puts("presione una tecla para cerrar");
		getchar();
		return 1;
	}

	if(!DpcPutReg(han,0x20, confH, &erc, NULL)){
        printf("DpcPutReg failed sending config HIGH word.\n");
		puts("presione una tecla para cerrar");
		getchar();
		return 1;
	}

	return 0;
}

/*
Esta funcion envia una nueva memoria al bloque secuenciador.
Para esto debe enviar 32*2 datos de 8 bits. La memoria en tontal
cuenta con 32 addr de 16 bits. Para esto en el archivo "text_seq.tex"
debe haberse cargado los 64 BYTE a enviar escritos en formato hexadecimal

La funcion carga los 64 BYTE en el buffer data[64] y posteriormente
se envian con la funcion DpcPutRegRepeat, a la dirección 0x40.
*/
static int sendSeq(){ 
	
	BYTE data[68];
	memset(data,0x00,68);
	int i =0;
	
	FILE *pFilSeq;
	pFilSeq=fopen("tex_output.txt","r");
	rewind(pFilSeq);

	for(i=0;i<64;i++)
	{fscanf(pFilSeq,"%x",&data[i]);}
	
	fclose(pFilSeq);
	
	for( i=0; i<64;i++){									//Mostramos en consola los datos enviados.
	fprintf (stderr, "datos a enviar: %d : %x \n",i,data[i]);} 


	if(!DpcPutRegRepeat(han,0x40, data, 64, &erc, NULL)){
        printf("DpcPutRegRepeat failed.\n");
		puts("presione una tecla para cerrar");
		getchar();
		return 1;
	}
	printf("Datos enviados.\n");
	getchar();
	
	return 0;
}

/*
Esta funcion convierte de un numero int en ascii a su representación hexadecimal
*/
static BYTE charintohex(char in1,char in2){
	BYTE out=0x00;
	BYTE temp1=0x00;
	BYTE temp2=0x00;


	if(in1=='1'){ temp1=0x01;}
	if(in1=='2'){ temp1=0x02;}
	if(in1=='3'){ temp1=0x03;}
	if(in1=='4'){ temp1=0x04;}
	if(in1=='5'){ temp1=0x05;}
	if(in1=='6'){ temp1=0x06;}
	if(in1=='7'){ temp1=0x07;}
	if(in1=='8'){ temp1=0x08;}
	if(in1=='9'){ temp1=0x09;}
	if(in1=='a'){ temp1=0x0a;}
	if(in1=='b'){ temp1=0x0b;}
	if(in1=='c'){ temp1=0x0c;}
	if(in1=='d'){ temp1=0x0d;}
	if(in1=='e'){ temp1=0x0e;}
	if(in1=='f'){ temp1=0x0f;}
		
	if(in2=='1'){ temp2=0x10;}
	if(in2=='2'){ temp2=0x20;}
	if(in2=='3'){ temp2=0x30;}
	if(in2=='4'){ temp2=0x40;}
	if(in2=='5'){ temp2=0x50;}
	if(in2=='6'){ temp2=0x60;}
	if(in2=='7'){ temp2=0x70;}
	if(in2=='8'){ temp2=0x80;}
	if(in2=='9'){ temp2=0x90;}
	if(in2=='a'){ temp2=0xa0;}
	if(in2=='b'){ temp2=0xb0;}
	if(in2=='c'){ temp2=0xc0;}
	if(in2=='d'){ temp2=0xd0;}
	if(in2=='e'){ temp2=0xe0;}
	if(in2=='f'){ temp2=0xf0;}

	return out=temp2|temp1;
}

/*
Esta funcion convierte un numeros de 12 bits en 
formato complemento de dos a un entero con signo.
El formato de las entradas son 

	  11 10 9 8    7 6 5 4 3 2 1 0
	|----msb----| |-------lsb-----|

asi si nuestro numero a convertir es 0xf43 debemos usar
complementoDos2int(0x0f, 0x34);
el serultado será =-204.


*/
static int complementoDos2int(BYTE msb, BYTE lsb){
	BYTE carry=0x00;
	int d=0;
	if((msb&0x08)==0x08){

			lsb=lsb^0xff;
			msb=msb^0x0f;
			if(lsb==0xff){carry=0x01;}
			else{carry=0x00;}

			lsb=lsb+0x01;
			msb=msb+carry;

			msb=msb&0x0f;

			d=(-1)* (int)(msb << 8 | lsb);

		}
		else{
			d=(int)( msb << 8 | lsb);
		}
	return d;
}

int main(int cszArg, char * rgszArg[]) {
  	//definimos funciones locales
	char c='p';			//recibir datos
	char n='p';			//recibir datos
	BYTE ctrl=0x00;		//palabra de control a enviar
	BYTE confH=0x00;	//palabra de configuracion primeros 8 bits
	BYTE confL=0x00;	//palabra de configuracion ultimos 8 bits
	//BYTE dato=0x00;		//variable de dato
	BYTE max=0x07;
	int val=0;
	int i=0;
	int d[1000];

	////creamos una variable FILE para registrar los datos obtenidos
	////y un vector de 30 datos de 8 bits a enviar.
	FILE * pFile;
	pFile = fopen ("prueba.txt","w");
	BYTE datos[2000];
	memset(datos,0xff,2000);


	//Iniciar la comunicación
	fprintf(stderr,"Iniciando\n");
    if(!DpcInit(&erc)) { 
        printf("No fue posible iniciar...\n");
        puts("presione una tecla para cerrar");
		getchar();
		return 0;
    }

	//Una vez inicializado tratamos de abrir la comuniacion.
	fprintf(stderr,"Abriendo conexion...\n");
	if(!DpcOpenData(&han, "Nexys2",&erc,NULL)) {  // Change to Basys2 for the other board.
        printf("DpcOpenData failed (revise si la tarjeta esta conectada)\n");
		DpcTerm();
        puts("presione una tecla para cerrar");
		getchar();
		return 0;
    } 

	
    fprintf(stderr,"enviando dato de prueba\n");			//Este dato es para resetear el puntero de direcciones en la memoria de la BRAM
	if(!DpcPutReg(han,0x3f, 0xff, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		getchar();
	}
	
	
	//--------------------------------------
	// Enviar un comando
	//--------------------------------------
	while(c!='x'){
	
	printf("Ingrese un comando:\n");
	n=getchar();
	c=getchar();
	getchar();
	if(n=='x'){break;}
	ctrl=charintohex(c,n);

	printf("Ingrese un confH:\n");
	n=getchar();
	c=getchar();
	getchar();
	if(n=='x'){break;}
	confH=charintohex(c,n);
	
	printf("Ingrese un confL:\n");
	n=getchar();
	c=getchar();
	getchar();
	if(n=='x'){break;}
	confL=charintohex(c,n);
	if(ctrl==0x44)
		{val=sendSeq();
		printf("Enviando una nueva secuencia\n");}
	else
		{val= sendComnd(ctrl,confH,confL);
		printf("Enviando comando\n");}
	if(c=='x'){ printf("Saliendo del programa\n"); }
	if(val!=0){ printf("problema detectado\n");
				break;}
	}
	//--------------------------------------
	//--------------------------------------
	
	
	fprintf(stderr,"enviando dato de prueba\n");			//Este dato es para resetear el puntero de direcciones en la memoria de la BRAM
	if(!DpcPutReg(han,0x3f, 0xff, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		getchar();
	}
	
	fprintf(stderr,"leyendo datos. \n");					//Leemos de forma continua los 30 direcciones a partir de la direccion 3. y los almacenamos en el vector datos.
	if(!DpcGetRegRepeat(han,0x30,datos,2000,&erc, NULL)){
        printf("DpcGetRegRepeat failed.\n");
		puts("presione una tecla para cerrar");
		getchar();
	}

	fprintf(stderr,"calculando datos\n");
	BYTE carry=0x00;
	for(i=0;i<1000;i++){
		d[i]=complementoDos2int(datos[2*i+1],datos[2*i]);
	}

	
	for( i=0; i<30;i++){									//Mostramos en consola los datos enviados.
	fprintf (stderr, "datos obtenidos: %d : %d \n",i,d[i]);} 
	

	fprintf(stderr,"escribiendo datos\n");
	for( i=0; i<1000;i++){									//Mostramos en consola los datos enviados.
		fprintf (pFile,"%d\n",d[i]);} 

	////--------------------------------------------------------------------------
	////Este bloque es para probar el dac, hace un barrido de todos los valores
	//puts("listos para empezar, presione una tecla para continuar");
	//getchar();
	//confH=0xe0;
	//ctrl=0x01;
	//for(int j=0;j<15;j++){
	//for(int i=0;i<25;i++){
	//	confL=confL+0x0a;
	//	val=(j*25)+i;
	//	//printf("dato%i:%x %x\n",val,confH,confL);
	//	sendComnd(ctrl,confH,confL);
	//}
	//confH=confH+0x01;
	//}
	////----------------------------------------------------------------------------

	printf("Cerrando. presione cualquier tecla para continuar\n");	//cerramos las comunicaciones.
	getchar();	
    if( han != hifInvalid ) {
        DpcCloseData(han,&erc);
		DpcTerm();
    }
	
	DpcCloseData(han,&erc);											//terminamos la comunicación
	DpcTerm();
	fclose (pFile);
		
    return 0;
}