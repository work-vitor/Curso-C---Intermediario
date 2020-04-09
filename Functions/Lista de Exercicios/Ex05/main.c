#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Função para calcular a media de 4 alunos usando uma matriz bidimensional
void matMedia(float aluno[4][4]){
	
	float media[4],mf[4][1];
	int j, i;
	
	for(j=0;j<4;++j){
		
		for(i=0;i<4;++i){
			
			media[j] += aluno[j][i];
						
		}
		mf[j][1] = media[j]/4;
	}
	
	for(j=0;j<4;++j){
	
		printf("Media do aluno %d = %.2f\n",j+1,mf[j][1]);
	
	}
	
	
	
}
int main(int argc, char *argv[]) {
	
	float aluno[4][4];
	int j, i;
	
	
	
	for(j=0;j<4;++j){
		
		for(i=0;i<4;++i){
			printf("\nDigite a nota do aluno [%d]:",i+1);
			scanf("%f",&aluno[j][i]);
			
			
		}
		printf("\n-------------------\n");
	}
	
	
	matMedia(aluno);
	
	
	return 0;
}
