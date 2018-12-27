// EppPrueba.cpp : Defines the entry point for the console application.
//

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

static int test(){

	BYTE data[16];
	int i=0;
	BYTE count=0x00;
	for(i=0;i<16;i++){
	 data[i]=count;
	 count=count+1;
	}
	
	for(int i=0;i<16;i++){
	printf( "datos a enviar:%x \n",data[i]);
	}

	fprintf(stderr,"Iniciando\n");
    if(!DpcInit(&erc)) { 
        printf("No fue posible iniciar...\n");
        puts("presione una tecla para cerrar");
		getchar();
		return 0;
    }

	//una vez inicializado tratamos de abrir la comuniacion.
	fprintf(stderr,"Abriendo\n");
	if(!DpcOpenData(&han, "Nexys2",&erc,NULL)) {  // Change to Basys2 for the other board.
        printf("DpcOpenData failed (revise si la tarjeta esta conectada)\n");
		DpcTerm();
        puts("presione una tecla para cerrar");
		getchar();
		return 0;
    } 
	

	fprintf(stderr,"enviando dato de prueba\n");
	if(!DpcPutReg(han, 0x40, 0x03, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		getchar();
		return 0;
	}

	fprintf(stderr,"enviando dato de prueba\n");
	if(!DpcPutReg(han, 0x80, 0x00, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		getchar();
		return 0;
	}

	
	fprintf(stderr,"enviando dato de prueba\n");
	if(!DpcPutReg(han, 0x00,0xff, &erc, NULL)){
        printf("DpcPutReg failed.\n");
		puts("presione una tecla para cerrar");
		getchar();
		return 0;
	}

	fprintf(stderr,"enviado 16 datos");
	if(!DpcPutRegRepeat(han,0x00,data,16,&erc, NULL)){
		printf("DpcPutRegRepeat failed.\n");
		puts("presione una tecla para cerrar");
	   getchar();
	}

	fprintf(stderr,"dato enviado exitosamente. Cerrando\n");
    if( han != hifInvalid ) {
        DpcCloseData(han,&erc);
		DpcTerm();
		puts("presione una tecla para cerrar");
		getchar();
		return 0;
    }
	return 1;

}

int _tmain(int argc, _TCHAR* argv[])
{	
	int error=test();
	
    
        DpcCloseData(han,&erc);
		DpcTerm();
		puts("presione una tecla para cerrar");
		getchar();
	
    


	return 0;
}

