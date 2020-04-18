#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x, y;
	
	x = 10;
	
	int *ponteiro;
	ponteiro = &x;
	y=x;
	
	x=20;
	
	printf("%i", ponteiro);//Endereço de memoria
	printf("\n%i",*ponteiro);//valor atribuido ao ponteiro
	printf("\n%i", &x);//como acessar o enedereço de memoria '&'
	printf("\n%i", y);//
	
	
	
	
	//getchar();
	return 0;
}
