#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void fila_entrar(){
	if (fila.fim == tamanho) {
		printf("\nA fila esta cheia, volte outro dia!\n\n");
		system("pause");
	} else{
		printf("\nDigite o valor a ser inserido: ");
		scanf("%d", &fila.dados[fila.fim]);
		fila.fim++;
	}
}

void fila_sair(){
	if (fila.ini == fila.fim) {
		printf("\nFila Vazia, mas logo aparece alguem!\n\n");
		system("pause");
	} else{
		int i;
		for (i==0; i<tamanho; i++)
			fila.dados[i] = fila.dados[i+1];
		fila.dados[fila.fim] = 0;
		fila.fim--;
	}
}

void fila_mostrar(){
	int i;
	printf("[ ");
	for( i=0; i<tamanho; i++ )
		printf("%d ", fila.dados[i]);
	printf(" ]\n\n");
}
