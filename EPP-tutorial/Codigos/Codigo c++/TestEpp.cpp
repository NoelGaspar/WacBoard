// testEpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "dpcdecl.h"
#include "depp.h"
#include "dmgr.h"
#include "dpcutil.h"
#include "dpcdefs.h"

static HIF hif = hifInvalid;
static HANDLE han = hifInvalid;
static ERC erc=0;
static int val=0;
/*
static void DoPutRegRepeat() {
    BYTE    data[10000];
    int i = 0;
    int start = time(NULL);
    memset(data,0xff,sizeof(data));
    while(time(NULL) - start < 10)
    {
      if(!DeppPutRegRepeat(hif, 10, data, sizeof(data), fFalse)){
        printf("DeppPutRegRepeat failed.\n");
        exit(3);
      }
      i++;
    }
    printf("Stream to register completed %i bytes!\n",(int)(sizeof(data)*i));
}
*/
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
		char c=getchar();
		return 0;
    }

	//una vez inicializado tratamos de abrir la comuniacion.
	fprintf(stderr,"Iniciado\nAbriendo\n");
	if(!DpcOpenData(&han, "Nexys2",&erc,NULL)) {  // Change to Basys2 for the other board.
        printf("DpcOpenData failed (revise si la tarjeta esta conectada)\n");
		DpcTerm();
        puts("presione una tecla para cerrar");
		char c=getchar();
		return 0;
    } 


	// ya abierta la comunicación tratamos de enviar un dato al primer registro
    fprintf(stderr,"enviando dato de prueba\n");
	if(!DpcPutReg(han,0x00, 0x01, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		char c=getchar();
		return 0;
	}
		
    fprintf(stderr,"enviando dato de prueba\n");
	if(!DpcPutReg(han, 0x10, 0x02, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		char c=getchar();
		return 0;
	}
		
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

 //   // TRATAMOS DE ENVIAR UN BLOQUE DE 40 BYTES
	//fprintf(stderr,"leyendo datos. \n");
	//if(!DpcGetRegRepeat(han,0x30, data2,16,&erc, NULL)){
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

static int sendDac(){
	
    
	if(!DpcPutReg(han,0x00, 0x01, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		char c=getchar();
		return 1;
	}
    
	if(!DpcPutReg(han,0x10, 0x00, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		char c=getchar();
		return 1;
	}

	fprintf(stderr,"se ha enviado el dato 0xe800\n");
	if(!DpcPutReg(han,0x20, 0xe8, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		char c=getchar();
		return 1;
	}

	return 0;
}

static int sendConf(){ 
	char c='p';
	if(!DpcPutReg(han,0x00, 0x04, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		c=getchar();
		return 1;
	}
    
	if(!DpcPutReg(han,0x10, 0x55, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		 c=getchar();
		return 1;
	}
	
	if(!DpcPutReg(han,0x20, 0xee, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		 c=getchar();
		return 1;
	}
	fprintf(stderr,"se ha enviado el dato 0xffff\n");//cambiar por el dato a enviar!!

	return 0;

}

static int sendDpot(){

	if(!DpcPutReg(han,0x00, 0x03, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		char c=getchar();
		return 1;
	}
    
	if(!DpcPutReg(han,0x10, 0x80, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		char c=getchar();
		return 1;
	}

	fprintf(stderr,"se ha enviado el dato 0xe800\n");
	if(!DpcPutReg(han,0x20, 0x00, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		char c=getchar();
		return 1;
	}

	return 0;}

static int sendMux(){
    
	if(!DpcPutReg(han,0x00, 0x02, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		char c=getchar();
		return 1;
	}
    
	if(!DpcPutReg(han,0x10, 0x1f, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		char c=getchar();
		return 1;
	}

	fprintf(stderr,"se ha enviado el dato 0x1f00\n");
	if(!DpcPutReg(han,0x20, 0x00, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		char c=getchar();
		return 1;
	}

	return 0;
}


int main(int cszArg, char * rgszArg[]) {
  	char c='p';
	char n='p';
	//test();
	
	fprintf(stderr,"Iniciando\n");
    if(!DpcInit(&erc)) { 
        printf("No fue posible iniciar...\n");
        puts("presione una tecla para cerrar");
		c=getchar();
		return 0;
    }

	//una vez inicializado tratamos de abrir la comuniacion.
	fprintf(stderr,"Abriendo conexion...\n");
	if(!DpcOpenData(&han, "Nexys2",&erc,NULL)) {  // Change to Basys2 for the other board.
        printf("DpcOpenData failed (revise si la tarjeta esta conectada)\n");
		DpcTerm();
        puts("presione una tecla para cerrar");
		c=getchar();
		return 0;
    } 

	
	//DpcPutReg(han,0x00, 0x00, &erc, NULL);// se envian dos datos dumy para sincronizar.
	//DpcPutReg(han,0x00, 0x00, &erc, NULL);

	while(c!='x'){
	printf("Ingrese un comando:\na:Configuracion\ns:Multiplexores\nd:Digipot\nf: Dac.\nx:salir\n");
	c=getchar();
	n=getchar();
	if(c=='a'){ printf("modo Configuracion\n"); 
				val= sendConf();}
	if(c=='s'){ printf("modo Multiplexor\n"); 
				val= sendMux();}
	if(c=='d'){ printf("modo Digipot\n"); 
				val= sendDpot();}
	if(c=='f'){ printf("modo Dac\n"); 
				val= sendDac();}
	if(c=='x'){ printf("Saliendo del programa\n"); }
	if(val!=0){break;}
	}

	
	printf("Cerrando. presione cualquier tecla para continuar\n");
	c=getchar();	
    if( han != hifInvalid ) {
        DpcCloseData(han,&erc);
		DpcTerm();
    }
	
	DpcCloseData(han,&erc);
	DpcTerm();
    return 0;
}