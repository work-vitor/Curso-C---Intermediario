#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void concaString(char nome[], int t1,  char sobre[], int t2, char novaP[]){
	
	int i, j;
	
	for(i=0;i<t1; i++){
		novaP[i]= nome[i];
	}
	i=-1;
	for(j=5;j<=10;++j){
		i++;	
		novaP[j] = sobre[i];
	}
	
	
}

int main(int argc, char *argv[]) {
	
	char nome[] = {'J','o','a','o',' '};
	char sobre[] = {'V','i','t','o','r'};
	char novaP[10];
	
	concaString(nome, 5, sobre, 5, novaP);
	
	int i;
	
	for(i=0;i<10;++i){
		printf("%c",novaP[i]);
	}
	
	
	return 0;
}
