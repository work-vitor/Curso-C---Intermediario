#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char teste[4] = "joao";//jeito normal sem stress
	
	//Jeito de retardado da video aula, puta trampo vei
	
	char retard[] = {'J','o','a','o'};
	
	int i;
	for(i=0;i<4;i++){
		printf("%c",retard[i]);
	}
	
	//Jeito normal, sem muito trampo :/
	printf("\n%s",teste);
	
	
	return 0;
}
