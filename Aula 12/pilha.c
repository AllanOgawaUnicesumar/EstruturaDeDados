#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void criarPilha(Pilha *p){
	p->topo = NULL;
	p->tam = 0;
}

void empilhar(Pilha *p, int num){
	if(p->tam<5){
		NoPilha *novo = malloc(sizeof(NoPilha));
		if(novo){
			novo->valor = num;
			novo->proximo = p->topo;
			p->topo = novo;
			p->tam++;
		}
	}
}

NoPilha *desempilhar(Pilha *p){
	if(p->topo){
		NoPilha *remover = p->topo;
		p->topo = remover->proximo;
		p->tam--;
		return remover;
	}else
		printf("\nPilha vazia\n");
	
	return NULL;
}

void imprimirPilha(Pilha *p){
	NoPilha *aux = p->topo;
	while(aux){
		printf("%d ", aux->valor);
		aux = aux->proximo;
	}
}