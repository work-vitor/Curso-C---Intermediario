#include <stdio.h>
#include <stdlib.h>

//Programar em C - Passar Ponteiro Como Par�metro de Uma Fun��o - Aula 66 Revis�o


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void testeVar(int x){
	x++;
}

void testePont(int *pX){
	++*pX;
}

int main(int argc, char *argv[]) {
	
	int teste = 1;
	int *Pteste = &teste;
	
	testeVar(teste);
	
	printf("%i\n", teste);
	
	testePont(Pteste);
	
	printf("%i\n",*Pteste);
	
	return 0;
}

