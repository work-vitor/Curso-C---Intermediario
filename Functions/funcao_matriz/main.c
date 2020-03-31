#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void printMatriz(int mat[][3]){
	
	int i, j;
	
	for(i=0;i<3; ++i){
		for(j=0;j<3; ++j){
			
			printf(" %d", mat[i][j]);	
		}
		printf("\n");
	}
	
}

int main(int argc, char *argv[]) {
	
	void printMatriz(int mat[3][3]);//Declarando a matriz, acho que nao precisa mas segue a aula
	int mat[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	printMatriz(mat);
	
	
	
	
	return 0;
}
