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
	};
	
	//Declarando a estrutura
	struct horario agora;
	
	//Atribuindo valores a estrutura
	agora. horas = 15;
	agora. minutos = 17;
	agora. segundos = 30;
	
	//Imprimindo os dados da estrutura
	printf("%i:%i:%i", agora.horas, agora.minutos, agora.segundos);
	
	return 0;
}
