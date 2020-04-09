#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct horario{
	int horas;
	int minutos;
	int segundos;
};

void receberHorarios(struct horario list[5]){
	int i;
	for(i=0;i<5;i++){
		printf("Digite o %i horario (hh:mm:ss):",i+1);
		scanf("%d:%d:%d",&list[i].horas,&list[i].minutos,&list[i].segundos);
	}
	
}

void lerPrint(struct horario list[5]){
	
	int i;
	for(i=0;i<5;i++){
		printf("O %i horario (%d:%d:%d)\n",i+1,list[i].horas,list[i].minutos,list[i].segundos);
	}
	
}

int main(int argc, char *argv[]) {
	
	struct horario list[5];
	int i;
	
	receberHorarios(list);
	lerPrint(list);
	
	
	
	return 0;
}
