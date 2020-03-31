#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Variaveis Globais
int intVar = 100;
int intVar2 = 10;
double doubleVar = 100.123456789;


int convert_int(){
	
	//Formatação de variaveis inteiras 
	//-> usando duas "%%" mostra o '%d' em vez de chamar a variavel
	
	printf("Variavel inteira(%%d) = %d\n",intVar2);//Base Decimal
	printf("Variavel inteira(%%i) = %i\n",intVar);//Base Decimal
	printf("Variavel inteira(%%x) = %x\n",intVar);//(%x) Converte Decimal para Base Hexadecimal
	printf("Variavel inteira(%%o) = %o\n",intVar);//(%o) Converte Decimal para Base Octadecimal
	printf("\n");
}

double convert_double(){
	
	//Formatação de variaveis double/float
	printf("\nVariavel double(%%f) = %f\n",doubleVar);//ponto flutuante
	printf("Variavel double(%%e) = %e\n",doubleVar);//Converte para notação cientifica
	printf("Variavel double(%%g) = %g\n",doubleVar);//Arredonda o numero em apenas 3 casas decimais dps da ' , '.
	printf("Variavel double(%%a) = %a\n",doubleVar);//Notação cientifica com ponto fluatuante
	printf("\n");
}

int main(int argc, char *argv[]) {
	
	convert_int();
	printf("*****************************************\n");
	convert_double();
	return 0;
}
