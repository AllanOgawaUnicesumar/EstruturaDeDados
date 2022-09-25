#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha pilha;

void pilha_entrar(){
	if(pilha.fim == tamanho){
		printf("\nA pilha esta cheia, impossivel empilhar!\n\n");
		system("pause");
	} else{
		printf("\nDigite o valor a ser empilhado: ");
		scanf("%d", &pilha.dados[pilha.fim]);
		pilha.fim++;
	}	
}

void pilha_sair(){
	if(pilha.ini == pilha.fim){
		printf("\nA pilha esta vazia, impossivel desempilhar!\n\n");
		system("pause");
	} else{
		pilha.dados[pilha.fim-1] = 0;
		pilha.fim--;
	}
}

void pilha_mostrar(){
	int i;
	printf("[ ");
	for(i=0; i<tamanho; i++)
		printf("%d ", pilha.dados[i]);
	printf(" ]\n\n");
}