#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){
	op = 1;
	fila.ini = 0;
	fila.fim = 0;
	
	while( op != 0){
		system("cls");
		fila_mostrar();
		printf("\nEscolha uma opcao:\n1 - Incluir na Fila\n2 - Excluir da Fila\n0 - Sair\n\nOpcao: ");
		scanf("%d",&op);
		switch (op) {
			case 1:
				fila_entrar();
				break;
			case 2:
				fila_sair();
				break;
		}
	}
	
	return 0;
}