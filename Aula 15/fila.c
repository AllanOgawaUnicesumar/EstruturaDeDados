#include "fila.h"


void inserir (No **fila, int num, char *string, int dia, int mes, int ano){
	No *aux, *novo = malloc(sizeof(No));
	if(novo){
		novo->teste = num;
		strcpy(novo->nome,string);
		novo->ano =ano;
		novo->mes =mes;
		novo->dia =dia;
		novo->proximo = NULL;
		if(*fila == NULL)
			*fila = novo;
		else{
			aux = *fila;
			while(aux->proximo)
				aux = aux->proximo;
			aux->proximo = novo;
		}
	} else
		printf("\nErro ao alocar memoria.\n");
}


void inserir_prioridade (No **fila, char *string, int dia, int mes, int ano){
	No *aux, *novo = malloc(sizeof(No));
	if(novo){
		novo->teste = 2;
		strcpy(novo->nome,string);
		novo->ano =ano;
		novo->mes =mes;
		novo->dia =dia;
		novo->proximo = NULL;
		
		if(*fila == NULL)
			*fila = novo;
		else{
			novo->proximo = *fila;
			*fila = novo;
		}
	} else
		printf("\nErro ao alocar a memoria\n");
}

No *remover(No **fila){
	system("pause");
	No *remover = NULL;
	Prioridade *pessoas = malloc(sizeof(Prioridade));
	if(*fila){
		while(*fila){
			if((*fila)->teste==2){
				pessoas->ano=(*fila)->ano;
				pessoas->mes=(*fila)->mes;
				pessoas->dia=(*fila)->dia;
				strcpy(pessoas->nome,(*fila)->nome);
				pessoas->teste=2;
			}
			remover = *fila;
			*fila = remover->proximo;
		}
			
	} else
		printf("Fila vazia\n");
		
	return remover;
}

void imprimir (No *fila){
	int x=0;
	printf("\n-------- FILA --------\n");
	while(fila){
		x++;
		printf("%d - %d %s %d/%d/%d\n", x,fila->teste,fila->nome,fila->dia,fila->mes,fila->ano);
		fila = fila->proximo;
	}
	printf("\n------ FIM FILA ------\n");
}