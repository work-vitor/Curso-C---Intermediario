#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Inverter a orndem do numero dgitado pelo usuario
void inverterOrdem(int  vet[]){
	
	int temp[5], i, j;
	
	i= -1;
	for(j=4;j>=0;j--){
		i++;
		temp[i] = vet[j];
	}
	
	for(i=0; i<=4; ++i){
		vet[i] = temp[i];
	}
}

int main(int argc, char *argv[]) {
	
	int vet[5],temp[5], i, j;
	
	for(i=0; i<=4; ++i){
		printf("Digite um numero:");
		scanf("%d",&vet[i]);
		
		printf("\nvetor[%d] = %d\n",i,vet[i]);
	}
	
	printf("\n********************************************\n");
	
	inverterOrdem(vet);
	
	for(i=0; i<=4; ++i){
		printf("\nvetor[%d] = %d\n",i,vet[i]);
	}
	
	return 0;
}
