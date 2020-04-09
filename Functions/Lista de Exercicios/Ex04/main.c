#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Função para comparar string
void compararString(char p1[100], char p2[100]) {

	if(strcmp(p1, p2) == 0) {
		printf("As palavras sao iguais!");
	} else {
		printf("As palavras sao diferente!");
	}

}
int main(int argc, char *argv[]) {

	char p1[100], p2[100], re;

	printf("Digite uma palavra:");
	scanf("%s",&p1);

	printf("\nDigite uma palavra:");
	scanf("%s",&p2);

	compararString(p1, p2);

	return 0;
}
