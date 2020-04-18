#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
#define DPI PI * 2
#define AREA_C(raio) raio * raio * PI//MACROS
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("%.2f\n", PI);
	printf("%.2f\n", DPI);
	printf("%.2f", AREA_C(10));
	
	
	
	
	return 0;
}
