#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void criarFila(Fila *fila){
	fila->prim = NULL;
	fila->fim = NULL;
	fila->tam = 0;
}

void inserirFila(Fila *fila, int num){
	if(fila->tam <5){
		No *aux, *novo = malloc(sizeof(No));
		novo->valor = num;
		novo->proximo = NULL;
		
		if (fila->prim == NULL){
			fila->prim = novo;
			fila->fim = novo;
		} else{
			fila->fim->proximo = novo;
			fila->fim = novo;
		}
		fila->tam++;
	}
}

No* removerFila(Fila *fila){
	No *remover = NULL;
	
	if(fila->prim){
		remover = fila->prim;
		fila->prim = remover->proximo;
		fila->tam--;
	}else
		printf("\nFila vazia\n");
	
	return remover;
}

void imprimirFila(Fila *fila){
	No *aux = fila->prim;
	while(aux){
		printf("%d ", aux->valor);
		aux = aux->proximo;
	}
}