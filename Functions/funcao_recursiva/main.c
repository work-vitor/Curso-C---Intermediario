#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Função fatorial recursiva
int fat(int x){
	
	int res;
	
	if(x == 0){
		res = 1;
	}else{
		
		res = x*fat(x-1);
		
	}
	
	return res;
	
	
}

int main(int argc, char *argv[]) {
	
	int num, resu;
	
	printf("Digite um numero:");
	scanf("%d",&num);
	
	resu = fat(num);
	
	printf("\nO fatorial eh: %d",resu);
	
	
	return 0;
}
