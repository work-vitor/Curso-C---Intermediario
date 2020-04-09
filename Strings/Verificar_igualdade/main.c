#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Puta trampo, sendo que poderia ter usado a função 'strcmp'

_Bool stringIguais(char s1[], char s2[]){
	
	int i =0;
	
	while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
		++i;
		
		
	}
	
	if(s1[i] == '\0' && s2[i] == '\0'){
		return 1;//true
	}else{
		return 0;//false
	}
	
}

int main(int argc, char *argv[]) {
	
	if(stringIguais("joao", "joao")){
		printf("\nSao iguais");
	}else{
		printf("\nSao diferentes");
	}
	
	return 0;
}
