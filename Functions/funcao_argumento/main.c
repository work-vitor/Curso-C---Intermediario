#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void funcaoPrint(int x, int vetor[]){
	x = x+10;
	vetor[1] = 20;
	
	printf("Variavel int na funcao printf = %d\n", x);
	printf("Vetor na funcao print = %d\n", vetor[1]);
	
}

int main(int argc, char *argv[]) {
	
	void funcaoPrint(int x, int vetor[]);
	
	int x = 10;//uma varivel normal, � apenas feito uma copia por isso n�o altera o valor, pra isso teria que dar um return na varivel dentro da fun��o
	
	int vet[3] = {10};//O vetor � passado direto para a fun��o, assim alterando seu valor depois de executado dentro da fun��o
	
	funcaoPrint(x, vet);
	
	printf("Variavel int na funcao principal = %d\n", x);
	printf("Vetor na funcao principal = %d", vet[1]);
	
	return 0;
}
