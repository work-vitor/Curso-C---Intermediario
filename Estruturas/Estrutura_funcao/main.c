#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Definindo a estrutura GLOBAL, assim podendo ser usada em qualquer função
	struct horario
	{
		int horas;
		int minutos;
		int segundos;
		float teste;
		char letra;
	};

//Função utilizando valores de uma estrutura estrutura
struct horario teste(struct horario x){
	
	//Imprimindo os valores da estrutura 'horario agora'
	printf("%d:%d:%d",x.horas,x.minutos,x.segundos);
	
	//Alterando valores da estrutura
	x.horas = 100;
	x.minutos = 100;
	x.segundos = 100;
	
	//Vai retornar os valores
	return x;
	
}

int main(int argc, char *argv[]) {
	
	struct horario teste(struct horario x);
	
	//Declarando a estrutura
	struct horario agora;
	
	//Atribuindo valores a estrutura
	agora.horas = 15;
	agora.minutos = 17;
	agora.segundos = 30;
	
	//Iniciando uma nova estrutura
	struct horario proxima;
	
	//Iniciando a função teste e filtrando os valores que foram atribuidos dentro da função
	proxima = teste(agora);
	
	printf("\n%d:%d:%d\n",proxima.horas,proxima.minutos,proxima.segundos);
	
	
	
	
	return 0;
}
