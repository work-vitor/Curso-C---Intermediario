#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int glob_vari = 2;//Variavel Global, pode ser usada em qualquer lugar do programa.

void teste(void){
	
	int vari_auto = 2;//Variavel Local automatica o valor não muda em nenhum momento durante a execução do programa
	
	static int vari_static = 2;//Variavel local estatica o valor altera cada vez que é executada durante o programa
	
	
	
	vari_auto *= 2;
	vari_static *=2;
	
	
	
	printf("\nVariavel Automatica: %i\n", vari_auto);
	printf("\n***********************************\n");
	printf("\nVariavel Estatica: %i\n", vari_static);
	printf("\n***********************************\n");
	printf("\nVariavel Global: %d",glob_vari);
}

int main(int argc, char *argv[]) {
	
	void teste(void);
	
	teste();
	teste();
	teste();
	
	printf("\nVariavel Global: %d",glob_vari);
	
	return 0;
}
