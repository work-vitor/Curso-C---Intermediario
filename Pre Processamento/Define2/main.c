#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
#define NULO 0
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double areaCirculo(double raio){
	
	return raio * raio * PI;
	
}


int main(int argc, char *argv[]) {
	
	double r;
	int i = 3;
	
	while(i != NULO){
		printf("Digite o valor do raio:");
		scanf("%lf", &r);
		printf("A area do circulo: %.2lf\n", areaCirculo(r));
		--i;
	}
	
	
	return 0;
}
