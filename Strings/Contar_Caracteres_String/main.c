#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//função para contar quantos caracteres tem na string
int tamanhoString(char string[]){
	
	int numCar = 0;
	
	while(string[numCar]!= '\0'){
		++numCar;
	}
	
	//++numCar;
	
	return numCar;
	
}

int main(int argc, char *argv[]) {
	
	char string[20];
	
	printf("Digite uma palavra(string):");
	scanf("%s",string);
	
	int num = tamanhoString(string);
	
	printf("\nTotal de caracteres na string digitada: %d",num);
	return 0;
}
