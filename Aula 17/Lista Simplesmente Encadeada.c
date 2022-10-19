#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no *proximo;
}No;

void inserir_inicio(No **lista, int num){
	No *novo = malloc(sizeof(No));
	
	if(novo){
		novo->valor = num;
		novo->proximo = *lista;
		*lista = novo;
	}else
		printf("\nErro ao alocar memoria\n");
}

void inserir_fim(No **lista, int num){
	No *aux, *novo = malloc(sizeof(No));
	
	if(novo){
		novo->valor = num;
		novo->proximo = NULL;
		
		if(*lista == NULL)
			*lista = novo;
		else{
			aux = *lista;
			while(aux->proximo)
				aux = aux->proximo;
			aux->proximo = novo;
		}
	} else
		printf("\nErro ao alocar memoria\n");
}

void inserir_meio(No **lista, int num, int ant){
	No *aux, *novo = malloc(sizeof(No));
	
	if(novo){
		novo->valor = num;
		
		if(*lista == NULL){
			novo->proximo = NULL;
			*lista = novo;
		} else{
			aux = *lista;
			while(aux->valor!=ant && aux->proximo)
				aux = aux->proximo;
			novo->proximo = aux->proximo;
			aux->proximo = novo;
		}
	} else
		printf("\nErro ao alocar memoria\n");
}

void imprimir(No *no){
	printf("\nLista: ");
	while(no){
		printf("%d ", no->valor);
		no = no->proximo;
	}
	printf("\n\n");
	system("pause");
}

int main (void){
	int opcao, valor, anterior;
	No *lista = NULL;
	
	do{
		system("cls");
		printf("\n1 - Inserir no Inicio\n2 - Inserir no Fim\n3 - Inserir no Meio\n4 - Imprimir\n0 - Sair\n\nOpcao: ");
		scanf("%d",&opcao);
		
		switch(opcao){
			case 1:
				printf("\nValor: ");
				scanf("%d",&valor);
				inserir_inicio(&lista,valor);
				break;
				
			case 2:
				printf("\nValor: ");
				scanf("%d",&valor);
				inserir_fim(&lista,valor);
				break;
			
			case 3:
				printf("\nValor: ");
				scanf("%d",&valor);
				printf("\nValor Anterior: ");
				scanf("%d",&anterior);
				inserir_meio(&lista,valor,anterior);
				break;	
				
			case 4:
				imprimir(lista);
				break;
			
			default:
				if(opcao != 0)
					printf("Opcao Invalida!\n");
		}
	} while(opcao != 0);
}
