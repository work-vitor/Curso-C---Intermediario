#include <stdio.h>
#include <stdlib.h>

#define MAIOR(X, Y) X > Y ? X : Y
#define E_MINIS(char) char >= 'a' && char <= 'z'
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char x = 'C';
	
	if(E_MINIS(x)){
		printf("E minisculo\n");
	}else{
		printf("Nao eh minisculo\n");
	}
	
	printf("%i", MAIOR(10, 50));
	
	return 0;
}
