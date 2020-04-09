#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct dicionario{//estrutura global
	char palavra[20];
	char definicao[50];
};

bool comparaString(const char palavra1[], const char palavra2[]){
	
	int i =0;
	
	while(palavra1[i] == palavra2[i] && palavra1[i] != '\0' && palavra2[i] != '\0'){
		++i;
		
		
	}
	
	if(palavra1[i] == '\0' && palavra2[i] == '\0'){
		return true;
	}else{
		return false;
	}
	
}

int procurarString(const struct dicionario lingua[], const char procurar[], const int numDePalavras){
	
	bool comparaString(const char palavra1[], const char palavra2[]);
	
	int i = 0;
	
	while(i<numDePalavras){
		
		if(comparaString(procurar, lingua[i].palavra)){
			return i;
		}else{
			++i;
		}
	}
	return -1;
}

int main(int argc, char *argv[]) {
	
	int procurarString(const struct dicionario lingua[], const char procurar[], const int numDePalavras);
	
	const int numeroDefinicao = 7;
	
	char palavra[20] = {'\0'};
	
	int resultadoPesquisa;
	
	const struct dicionario portugues[7] ={
		{"Disgraca","sei la"},
		{"lil", "nome de trapper"},
		{"whore","fat nick"},
		{"odio","sentimento de destruicao"},
		{"tracyminajj"," im tracyminajj bitch"},
		{"lean","bebida a base de codeina"},
		{"zemaru","eh muito zika fi"},
	};
	
	printf("Digite uma palavra:");
	scanf("%s", palavra);
	
	resultadoPesquisa = procurarString(portugues, palavra, 7);
	
	if(resultadoPesquisa != -1){
		printf("%s\n", portugues[resultadoPesquisa].definicao);
	}else{
		printf("Palavra nao encotrada");
	}
	
	
	return 0;
}
