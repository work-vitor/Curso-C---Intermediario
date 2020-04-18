#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void testeVariavel(int x){
	//esta se criando uma variavel copia, por isso nao altera o valor
	++x;
}

void testePonteiro(int *pX){
	//aqui ja se passa o endereço de memoria, por isso altera o valor
	++*pX;
	
}


int main(int argc, char *argv[]) {
	
	
	int teste = 1;
	
	int *pTeste = &teste;
	
	testePonteiro(pTeste);
	
	printf("%i\n", teste); 
	
	return 0;
}
