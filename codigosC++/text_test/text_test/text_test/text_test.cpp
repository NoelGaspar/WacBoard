// text_test.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


using namespace System;

int main(array<System::String ^> ^args)
{	
	int k=0;
	BYTE datos[64];
	BYTE count=0x00;
	for(k=0;k<64;k++)
	{datos[k]=count;
	count=count+1;}

	BYTE leidos[64];
	memset(leidos,0xff,64);
	size_t result;
	BYTE d1;
	BYTE d2;

	FILE *pFile;
	pFile= fopen("mem.list","r");
	

	/*printf("Escribiendo datos en el archivo\n");
	for(k=0;k<64;k++)
	{if(k%2==0){ fprintf(pFile,"%x ",datos[k]);}
	else {fprintf(pFile,"%x\n",datos[k]);}}*/


	rewind(pFile);
	for(k=0;k<64;k++){
	fscanf(pFile,"%x",&leidos[k]);}
	//result=fread(leidos,2,2,pFile);
	
	for(k=0;k<64;k++)
	{printf("los datos leidos fueron: %x\n",leidos[k]);}
	fclose(pFile);
	getchar();

    return 0;
}
