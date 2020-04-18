#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void copiarString(char *copiarD, char *colarA){
	
	while(*copiarD != '\0'){
		*colarA = *copiarD;
		++copiarD;
		++colarA;
	}
	
	
}


int main(int argc, char *argv[]) {
	void copiarString(char *copiarD, char *colarA);
	
	char string[] = "Joao Vitor";
	
	char string2[20];
	
	copiarString(string, string2);
	
	printf("%s\n", string2);
	
	
	return 0;
}
