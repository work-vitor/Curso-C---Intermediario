#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1;
	
	do{
		printf("Digite um numero decimal:");
		scanf("%d",&n1);
		
		printf("Hexadecimal = %x\n",n1);//(%x) Converte Decimal para Base Hexadecimal
		printf("Octadecimal = %o\n",n1);//(%o) Converte Decimal para Base Octadecimal
	}while(0<1);
	
	return 0;
}
