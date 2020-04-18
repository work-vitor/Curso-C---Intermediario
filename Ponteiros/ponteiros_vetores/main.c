#include <stdio.h>
#include <stdlib.h>

//Exemplos da introdução a vetores com ponteiros Aula 71


/*int *Pveto = veto;//Declarando um ponteiro que aponta em um vetor
int *Pvetor = &veto[2];//Para selecionar em quak membro apontar*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Aula 72
	int veto[3] = {1,9,3};
		
	int *Ponteiro = veto;
	
	*(Ponteiro + 1) = 10;//Alterando o valor do vetor, atraves do ponteiro
	
	printf("%d",veto[1]);
	
	return 0;
}
