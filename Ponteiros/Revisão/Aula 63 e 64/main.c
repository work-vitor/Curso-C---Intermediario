#include <stdio.h>
#include <stdlib.h>

//Programar em C - Ponteiros à Estruturas - Aula 63 - Revisão

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	struct horario{
		int hora;
		int minuto;
		int segundo;
	};
	
	struct horario agora, *depois;
	
	agora.hora = 10;
	agora.minuto = 10;
	agora.segundo = 10;
	
	depois = &agora;
	
	depois->hora = 20;
	depois->minuto = 30;
	depois->segundo = 50;
	
	int soma = 100;
	
	struct horario antes;
	
	antes.hora = soma + depois->hora;
	antes.minuto = soma + depois->minuto;
	antes.segundo = soma + depois->segundo;
	
	printf("%i:%i:%i",agora.hora, agora.minuto, agora.segundo);
	
	printf("\n%i:%i:%i",antes.hora, antes.minuto, antes.segundo);
	
	//usa (->) para atribuir e dar printf em uma estruturas de tipo ponteiro	
	printf("\n%i:%i:%i",depois->hora, depois->minuto, depois->segundo);
	
	
	return 0;
}
