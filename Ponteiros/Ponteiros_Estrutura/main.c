#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	struct horario{
		int horas;
		int minutos;
		int segundos;
	};
	
	struct horario agora, *depois;
	
	depois = &agora;
	
	depois->horas = 20;
	depois->minutos =25;
	depois->segundos = 21;
	
	int soma = 100;
	
	struct horario antes;
	
	antes.horas = soma + depois->minutos;
	antes.minutos = agora.horas + depois->segundos;
	antes.segundos = depois->minutos + depois->segundos;
		
	printf("%i:%i:%i",antes.horas,antes.minutos,antes.segundos);
	
	
	return 0;
}
