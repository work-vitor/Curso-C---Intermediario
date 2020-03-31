#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void ordemCresc(int vet[], int i){
	
	int p, j, temp;
	
	for(p=0; p < i; ++p){
		
		for(j = p+1; j<i; ++j){
			
			if(vet[p]>vet[j]){
				
				temp = vet[p];
				vet[p] = vet[j];
				vet[j] = temp;
			}
			
		}
	}
	
}

int main(int argc, char *argv[]) {
	
	int vet[10] = {1, 4, 3, 1, 9, 8, 0, 5, 7, 3, 2};
	
	int i;
	
	ordemCresc(vet, 10);
	
	for(i=0;i<10; i++){
		printf("\nOrdem Crescente: %d\n", vet[i]);
	}
	return 0;
}
