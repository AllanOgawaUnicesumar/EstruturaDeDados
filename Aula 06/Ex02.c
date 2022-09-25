#include <stdio.h>
#include <stdlib.h>

int *aloc_vet(int);
void libera_vetor(int *);
void imprime_vetor(int *, int);

int n;

int *aloc_vetor(int n){
	int *vet = malloc(n * sizeof (int));
	return vet;
}

void libera_vetor(int *vet){
	free(vet);
}

void imprime_vetor(int *vet, int n){
	int i;
	for(i=0;i<n;i++){
		printf("vetor %d: %d\n", i+1, *(vet+i));
	}
	printf("\n");
}

int main(){
	int *vet = NULL, i;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	vet = aloc_vetor(n);
	
	for(i=0;i<n;i++){
		printf("vetor %d: ", i+1);
		scanf("%d", &vet[i]);
	}
	printf("\n");
	
	imprime_vetor(vet, n);
	
	libera_vetor(vet);
	printf("vetor depois de liberado\n\n");
	for(i=0;i<n;i++)
		printf("vetor %d: %d\n", i+1, vet[i]);
	
	vet = NULL;
	return 0;
}
