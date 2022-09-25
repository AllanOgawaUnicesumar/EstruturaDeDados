#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>
#include <stdlib.h>

#define tamanho 5

typedef struct{
	int dados[tamanho];
	int ini, fim;
}Pilha;


void pilha_entrar();
void pilha_sair();
void pilha_mostrar();

#endif