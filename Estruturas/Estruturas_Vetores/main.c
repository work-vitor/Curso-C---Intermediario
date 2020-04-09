#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j;
	srand((unsigned)time(NULL));
	
	//Definindo a estrutura
	struct horario
	{
		int horas;
		int minutos;
		int segundos;
		float teste;
	};
	
	//Declarando a estrutura tipo vetor
	struct horario teste[5];
	
	/*teste[0].horas = 10;
	teste[0].minutos = 20;
	teste[0].segundos = 30;*/
	
	//Gerar valores aleatorios
	for(i=0;i<5;++i){
		teste[i].horas = rand() % 10; 
		teste[i].minutos = rand() % 20;
		teste[i].segundos = rand() % 30;
	}
	
	//Imprimir os valores do vetor
	for(j=0;j<5;++j){
		printf("\n%d:%d:%d -> Vetor [%d]\n", teste[j].horas, teste[j].minutos, teste[j].segundos, j);
	}
	
	
	return 0;
}
