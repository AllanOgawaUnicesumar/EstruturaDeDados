#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha pilha;
int op;

int main(){
	op = 1;
	pilha.ini = 0;
	pilha.fim = 0;
	
	while(op!=3){
		system("cls");
		pilha_mostrar();
		printf("\nEscolha uma opcao\n");
		printf("1 - Empilhar\n");
		printf("2 - Desempilhar\n");
		printf("3 - Sair\n");
		printf("\nOpcao: ");
		scanf("%d", &op);
		switch(op){
			case 1:
				pilha_entrar();
				break;
			case 2:
				pilha_sair();
				break;
		}
	}
	
	return 0;
}