#include <stdio.h>
#include <stdlib.h>

//Programar em C - Estruturas que contêm Ponteiros - Aula 65

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	struct horario{
		int *Phora;
		int *Pminuto;
		int *Psegundo;
	};
	
	struct horario hoje;
	
	int hora = 200;
	int minuto = 300;
	int segundo = 400;
	
	hoje.Phora = &hora;
	hoje.Pminuto = &minuto;
	hoje.Psegundo = &segundo;
	
	//Printf no valor dos ponteiros tipo estrutura
	printf("Hora - %i\n",*hoje.Phora);
	printf("Minuto - %i\n",*hoje.Pminuto);
	printf("Segundo - %i\n",*hoje.Psegundo);
	
	printf("\n*************************************\n\n");
	
	
	//Printf no endereço de memoria da estrutura
	printf("Hora - %i\n",hoje.Phora);
	printf("Minuto - %i\n",hoje.Pminuto);
	printf("Segundo - %i",hoje.Psegundo);
	
	return 0;
}
