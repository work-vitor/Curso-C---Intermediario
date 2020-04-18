#include <stdio.h>
#include <stdlib.h>
#define SIM 100
#define NAO -100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	printf("Digite um numero:");
	scanf("%d",&x);
	
	if(x <=  10){
		printf("%d", NAO);
	}else{
		printf("%d",SIM);	
	}
	
	return 0;
}
