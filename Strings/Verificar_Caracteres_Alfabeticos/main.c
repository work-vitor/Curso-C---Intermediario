#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void alfabetico(char variavel){
	
	if((variavel >= 'a' && variavel <= 'z' ) || (variavel>= 'A' && variavel <= 'Z')){
		printf("eh uma letra\n");
	}else{
		printf("nao eh uma letra\n");
	}
}

int main(int argc, char *argv[]) {
	
	char nome[20];
	printf("Digite uma palavra:");
	scanf("%s",&nome);
	
	int i=0;
	
	while(nome[i] != '\0'){
		alfabetico(nome[i]);
		++i;
	}
	
	return 0;
}
