#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char nome[30], sobre[30];
	
	printf("Digite seu nome e sobrenome:");
	scanf("%s%s",&nome,&sobre);//obter strings do usuario
	
	printf("\n%s %s\n",nome, sobre);
	
	
	return 0;
}
