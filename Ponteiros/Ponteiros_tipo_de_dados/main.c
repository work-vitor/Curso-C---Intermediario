#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x = 10;
	double y = 20.50;
	char z = 'a';
	
	int *PX = &x;
	double *PY = &y;
	char *PZ  = &z;
	
	int *res;
	
	res = 2358828;
	
	printf("Endereco x = %i - Valor x = %i",PX,*PX);//Sem o '*' voce atribui o endereço de memoria e com '*' voce atrivui o valor da variavel
	printf("\nEndereco y = %i - Valor y = %f",PY,*PY);
	printf("\nEndereco z = %i - Valor z = %c",PZ,*PZ);
	printf("\nValor x  = %i",*res);
	return 0;
}
