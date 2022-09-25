#ifndef FILA_H
#define FILA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no *proximo;
}No;

typedef struct{
	No *prim;
	No *fim;
	int tam;
}Fila;

void criarFila(Fila *fila);
void inserirFila(Fila *fila, int num);
No* removerFila(Fila *fila);
void imprimirFila(Fila *fila);



#endif