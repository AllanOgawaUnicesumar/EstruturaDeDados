/*5. Faça um programa para calcular a área e o perímetro de um hexágono. O programa deve 
implementar uma função chamada calc_hexa que calcula a área e o perímetro de um hexágono regular 
de lado L. O programa deve solicitar ao usuário o lado do polígono, calcular e imprimir a área e o 
perímetro do polígono. O programa termina quando for digitado um valor negativo qualquer para o lado.
A função deve obedecer o seguinte protótipo:

void calc_hexa(float l, float *area, float *perimetro);

Para os cálculos, obrigatoriamente você deve utilizar as funções sqrt e pow da biblioteca math.h.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void calc_hexa(float l, float *area, float *perimetro){
	*perimetro = l*6;
	*area = (3 * pow(l,2) * sqrt(3))/2;
}
int main(void){
	float lado,area,perimetro;
	printf("Digite o valor do Lado de um Hexagono: ");
	scanf("%f",&lado);
	if(lado<0)
		return 0;
	else
		calc_hexa(lado,&area,&perimetro);
		
		
	printf("\n     Area: %f\n",area);
	printf("Perimetro: %f\n",perimetro);
}
