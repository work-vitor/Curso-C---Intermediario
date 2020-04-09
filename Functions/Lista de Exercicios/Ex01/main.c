#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Exercicio para pedir um numero e gerar o fatorial, vou usar função e foda se.

//Function para gerar o fat
int Fatorial(int n1){
	
	int re;
	
	if(n1 == 0){
		re = 1;
	}else{
		re = n1*Fatorial(n1-1);
	}
	
	return re;
}

int main(int argc, char *argv[]) {
	
	int res, n1;
	
	printf("Digite um numero:");
	scanf("%d",&n1);
	
	res = Fatorial(n1);
	
	printf("Fatorial de %d = %d",n1,res);
	
	return 0;
}
