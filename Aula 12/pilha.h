#ifndef PILHA_H
#define PILHA_H

typedef struct no1{
	int valor;
	struct no1 *proximo;
}NoPilha;

typedef struct{
	NoPilha *topo;
	int tam;
}Pilha;

void criarPilha(Pilha *p);
void empilhar(Pilha *p, int num);
NoPilha *desempilhar(Pilha *p);
void imprimirPilha(Pilha *p);

#endif