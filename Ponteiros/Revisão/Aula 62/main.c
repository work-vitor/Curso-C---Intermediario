#include <stdio.h>
#include <stdlib.h>
//Programar em C - Ponteiros "char, int, double" - Aula 62 Revisão
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x = 10;
	double y = 10.20;
	char z = 'a';
	
	int *p = &x;//Ponteiro
	double *pY = &y;
	char *pZ = &z;
	
	float soma = *p + *pY;//Endereço de memoria
	
	//Com '*' = valor, sem o '*' = endereço de memoria
	
	printf("Endereco: %d - Valor = %d",p,*p);//Printf no valor do ponteiro
	printf("\nEndereco: %d - Valor = %f",pY,*pY);//Printf no valor do ponteiro
	printf("\nEndereco: %d - Valor = %c",pZ,*pZ);//Printf no valor do ponteiro
	
	printf("\nSoma: %f",soma);
	return 0;
}
