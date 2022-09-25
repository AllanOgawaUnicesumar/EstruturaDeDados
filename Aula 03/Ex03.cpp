/*3. Faça um programa que modifique as vogais de uma frase. O programa deve ler uma frase 
(max. 100 caracteres) e armazená-la num vetor. Imprimir a frase lida trocando as vogais, 
isto é, trocar 'a' pelo 'u', 'e' pelo 'o', 'i' pelo 'u', 'o' pelo 'a' e o 'u' pelo 'e'. 
Usar uma função void (procedimento) para realizar a troca e uma função para realizar a impressão 
da frase trocada. A função deve ter como parâmetro um ponteiro char referente ao vetor. 
Dica: Use a função gets() da biblioteca string.h para realizar a leitura da frase. use o switch 
para realizar as trocas. Só considere as letras minúsculas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char frase[100];
void troca(char *charalt);
void imprime(char *fras);

int main(void){
	printf("Digite uma frase (max. 100 caracteres): ");
	gets(frase);
	
	for(int x=0;x<100;x++)
	troca(&frase[x]);
	
	imprime(frase);
	system("pause");
}

void imprime(char *fras){
	printf("%s\n",frase);
}

void troca(char *charalt){
	switch (*charalt){
		case 'a':
			*charalt='u';
			break;
			
		case 'e':
			*charalt='o';
			break;
			
		case 'i':
			*charalt='u';
			break;
			
		case 'o':
			*charalt='a';
			break;
			
		case 'u':
			*charalt='e';
			break;	
	}
}
