#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Faz a soma dos dois numeros
float somaDeDigitos(float n1, float n2){
	
	float valorAbsoluto(float x);
	
	if(n1< 0){
		n1 = valorAbsoluto(n1);
	}if(n2<0){
		n2 = valorAbsoluto(n2);
	}
	
	return n1+n2;
	
}

//Converte o numero negativo para o valor absoluto
float valorAbsoluto(float x){
	
	return x * -1;
	
}

int main(int argc, char *argv[]) {
	
	float somaDeDigitos(float n1, float n2);
	
	float a, b, soma;
	
	printf("Digite dois numeros:");
	scanf("%f",&a);
	scanf("%f",&b);
	
	soma = somaDeDigitos(a, b);
	
	printf("\nA soma dos digitos eh: %.2f", soma);
	
	
	
	return 0;
}
