#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "pilha.h"

int main(void){
	No *r;
	Fila fila;
	Pilha p;
	int opcao,valor;
	int x=0;
	
	criarFila(&fila);
	criarPilha(&p);
	
	do{
		system("cls");
		printf("\n1 - Inserir\n2 - Remover\n3 - Imprimir\n0 - Sair\n\n\nOpcao: ");
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
				if(x==0){
					for(x=0;x<5;x++){
						printf("Insira valor para a FILA (%d): ",x+1);
						scanf("%d",&valor);
						inserirFila(&fila,valor);
					}
					
					for(x=0;x<5;x++){
						printf("Insira valor para a PILHA (%d): ",x+1);
						scanf("%d",&valor);
						empilhar(&p,valor);
					}
				}
				break;
			case 2:
				r = removerFila(&fila);
				if(r)
					free(r);
				
				r = desempilhar(&p);
				if(r)
					free(r);
					
				break;
			case 3:
				printf("\nFILA E PILHA: ");
				imprimirFila(&fila);
				imprimirPilha(&p);
				printf("\n\nFILA: ");
				imprimirFila(&fila);
				printf("\n\nPILHA: ");
				imprimirPilha(&p);
				printf("\n\n");
				system("pause");
				break;
		}
	} while(opcao != 0);
}