#include <stdio.h>
#include <stdlib.h>
#define TAM 2000
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void umaFuncao(void){
	printf("%i\n", TAM);
}

void outraFuncao(void){
	printf("%i\n", TAM);
}

int main(int argc, char *argv[]) {
	
	printf("%i\n",TAM);
	umaFuncao();
	outraFuncao();
	
	return 0;
}
