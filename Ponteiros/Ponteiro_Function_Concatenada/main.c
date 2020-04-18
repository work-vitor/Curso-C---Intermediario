#include <stdio.h>
#include <stdlib.h>

//Lista Concatenada e Função que retorna Ponteiro

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct lista{
	int valor;
	struct lista *proximo;
};

struct lista *procurarValor(struct lista *Plista, int valor){
	
	while(Plista != (struct lista *)0){
		if(Plista->valor == valor){
			return (Plista);
		}else{
			Plista = Plista->proximo;
		}
	}
	
	return (struct lista *)0;
	
}

int main(int argc, char *argv[]) {
	
	struct lista *procurarValor(struct lista *Plista, int valor);
	struct lista m1, m2, m3;		
	struct lista *resultado, *gancho = &m1;
	int valor;
	
	m1.valor = 5;
	m2.valor = 10;
	m3.valor = 15;
	
	m1.proximo = &m2;
	m2.proximo = &m3;
	m3.proximo = 0;
	
	printf("Digite o valor da pesquisa:");
	scanf("%d",&valor);
	
	resultado = procurarValor(gancho, valor);
	
	if(resultado == (struct lista *)0){
		printf("Valor nao encontrado!");
	}else{
		printf("Valor Encontrado: %d", resultado->valor);
	}
	
	return 0;
}
