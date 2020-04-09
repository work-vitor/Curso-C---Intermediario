#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char linha[100];
	char carac;
	int i = 0;
	
	do{
		
		carac = getchar();
		
		linha[i] = carac;
		
		++i;
	}while(carac != '\n');
	
	//Não precisa disso, mas nas versoes antigas precisava por causa do caracter nulo
	linha[i-1] = '\0';
	
	printf("\n%s",linha);
	
	
	return 0;
}
