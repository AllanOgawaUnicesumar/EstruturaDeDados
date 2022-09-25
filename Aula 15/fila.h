#ifndef FILA_H
#define FILA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
	struct no *proximo;
	char nome[50];
	int teste;
	int dia;
	int mes;
	int ano;
}No;

typedef struct po{
	int dia;
	int mes;
	int ano;
	char nome[50];
	int teste;
}Prioridade;

void inserir(No **fila, int num, char *string, int dia, int mes, int ano);

void inserir_prioridade(No **fila, char *string, int dia, int mes, int ano);

No *remover(No **fila);

void imprimir (No *fila);

#endif
