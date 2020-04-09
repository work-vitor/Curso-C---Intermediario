#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Definindo a estrutura
	struct horario
	{
		int horas;
		int minutos;
		int segundos;
		float teste;
		char letra;
	};
	
	//Declarando a estrutura
	struct horario agora;
	
	//Atribuindo valores a estrutura
	agora.horas = 15;
	agora.minutos = 17;
	agora.segundos = 30;
	
	//Declarando outra estrutura e atribuindo valores a ela
	struct horario depois;
	depois.horas = agora.horas+10;
	depois.minutos = agora.minutos;
	depois.teste = 50.55/123;
	depois.letra = 'a';
	
	//Imprimindo os dados da estrutura
	printf("*****************Estrura 'AGORA'****************************\n");
	printf("\n%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);
	
	printf("\n*****************Estrura 'DEPOIS'****************************\n");
	printf("\n%d",depois.horas);
	printf("\n%d",depois.minutos);
	printf("\n%.2f",depois.teste);
	printf("\n%c",depois.letra);
	return 0;
}
