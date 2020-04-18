#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	struct horario{
		int *Phoras;
		int *Pminutos;
		int *Psegundos;	
	};
		
	struct horario hoje;
	
	int horas = 200;		
	int minutos = 300;
	int segundos = 400;
	
	hoje.Phoras = &horas;
	hoje.Pminutos = &minutos;
	hoje.Psegundos = &segundos;
	
	printf("Valores dos ponteiros: %i:%i:%i",*hoje.Phoras,*hoje.Pminutos,*hoje.Psegundos);//acesando os valores atribuidos ao ponteiros
	
	printf("\nEnderecos de Memoris: %i:%i:%i",hoje.Phoras,hoje.Pminutos,hoje.Psegundos);//Acessando os endereços de memoria do ponteiro
	
	*hoje.Psegundos = 1000;//Alterando o valor do ponteiro
	
	printf("\nAlterando o valor do ponteiro: %i",*hoje.Psegundos);
		
	
	return 0;
}
