#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Exercicio dois, verificar se um numero é divisivel pelo outro usando função

//Function para descobrir se é divisel
float Igual(int n1, int n2){
	int res;
	if(n1%n2 == 0){
		res = 0;
	}else{
		res = 1;
	}
	
	return res;
	
}

int main(int argc, char *argv[]) {
	
	int n1, n2, res;
	
	printf("Digite um numero:");
	scanf("%d",&n1);
	
	printf("\nDigite outro numero:");
	scanf("%d",&n2);
	
	res = Igual(n1, n2);
	
	if(res == 0){
		printf("\nOs numeros digitados sao divisiveis um pelo outro.");
	}else{
		printf("\nOs numeros digitado nao sao divisiveis.");
	}
	
	return 0;
}
