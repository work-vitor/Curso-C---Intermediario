#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int somaVetor(int vetor[], const int n){
	
	int soma = 0;
	int *P;
	int *const FV = vetor + n;//Vai apontar no ultimo membro do vetor
	
	for(P=vetor;P < FV; ++P){
		
		soma += *P; 
		
	}
	
	return soma;
	
}

int main(int argc, char *argv[]) {
	
	int somaVetor(int vetor[], const int n);
	int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
	
	printf("A soma dos membros do vetor = %i", somaVetor(vetor, 10));
	
	return 0;
}
