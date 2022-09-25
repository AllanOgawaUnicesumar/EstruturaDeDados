/*4. Escreva um programa que declare uma matriz 10x10 de inteiros. Você crie uma função void 
(procedimento) para inicializar a matriz com zeros usando um ponteiro para a matriz. 
Faça outra função void para preencher depois a matriz com os números de 99 a 0, também 
usando ponteiro para matriz como parâmetro. Por fim, o programa deve imprimir a matriz.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
int matriz[10][10];

void zero(int *num){
	*num = 0;
}

void alterarValor(int *num){
	*num = rand() % 99;
}
int main(void){
	srand(time(NULL));
	
	for(int x=0;x<10;x++){
		for(int y=0;y<10;y++){
			zero(&matriz[x][y]);
			printf("%d ",matriz[x][y]);
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	
	for(int x=0;x<10;x++){
		for(int y=0;y<10;y++){
			alterarValor(&matriz[x][y]);
			printf("%2d ",matriz[x][y]);
		}
		printf("\n");
	}
		
}
