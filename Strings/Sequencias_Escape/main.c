#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	printf("Joao Vitor\a");//Alarme sonoro
	printf("\nJoao Vitor\b");//Move o cursor a uma posição a esquerda
	printf("\nJoao Vitor\n");//pula para a proxima linha
	printf("\nJoao Vitor\t");//tecla tab
	printf("\nJoao Vitor\r");//volta pro inicio da linha
	printf("\nJoao Vitor\0");//caractere nulo
	printf("\nJoao Vitor\" ");//Para poder usar aspas duplas na frase
	printf("\nJoao Vitor\' ");//Para poder usar aspas simples na frase	
	getchar();
	return 0;
}
