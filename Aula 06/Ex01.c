#include <stdio.h>
#include <stdlib.h>

void elementos(int *vet, int i);

void elementos(int *vet, int i){
	int j;
	for(j=0;j<i;j++){
		printf("Elemento %d: ", j+1);
		scanf("%d", &vet[j]);
	}
}

int main(void){
	int *num, n, j;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	num = (int*)malloc(sizeof(int)*n);
	
	elementos(num, n);
	
	for(j=0;j<n;j++){
		printf("%d", num[j]);
	}
	free(num);
	return 0;
}
