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
	};//agora = {10, 20, 30};//Outra forma de declarar a estrutura e Atribuir valores
	
	//Outra forma de declarar a estrutura e Atribuir valores
	//struct horario agora = {10,20,30};
	
	//Outra forma de declarar a estrutura e Atribuir valores de forma aleatoria
	struct horario agora = {.segundos = 10, .minutos = 20};
	
	
	//Atribuindo valores a estrutura
	//agora. horas = 15;
	//agora. minutos = 17;
	//agora. segundos = 30;
	
	//Imprimindo os dados da estrutura
	printf("%i:%i:%i", agora.horas, agora.minutos, agora.segundos);
	
	
	return 0;
}
