#include "fila.h"

int main(void){
	No *r, *fila = NULL;
	int opcao, valor, dia, mes, ano;
	char string[100];
	do{
		system("cls");
		printf("\n1 - Inserir\n2 - Imprimir\n3 - Terminar o dia\n0 - Sair\n\nOpcao: ");
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
				printf("Digite qual exame fazer (1, 2 ou 3): ");
				scanf("%d",&valor);
				printf("Digite a data(DD MM AAAA): ");
				scanf("%2d%2d%4d",&dia,&mes,&ano);
				printf("Digite seu primeiro nome apenas: ");
				scanf("%s",&string);
				if (valor==2)
					inserir_prioridade(&fila,string, dia, mes, ano);
				else if(valor ==1 || valor ==3)
					inserir(&fila, valor,string, dia, mes, ano);
				break;
			
			case 3:
				r = remover(&fila);
				if(r){
					free(r);
				}
				break;
				
			case 2:
				imprimir(fila);
				system("pause");
				break;
				
			default: 
				if(opcao!=0)
					printf("\nOpcao Invalida\n");
		}
	} while(opcao != 0);
}