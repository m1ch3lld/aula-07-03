#include <stdio.h>
#include <stdlib.h>

float soma(float n1, float n2){
return n1 + n2;
}
float subtracao(float n1, float n2){
return n1 - n2;
}
float divisao(float n1, float n2){
return n1 / n2;
}
float multiplicacao(float n1, float n2){
return n1 * n2;
}
int main () {
	
	float PrimeiroNumero, segundoNumero;
	
	printf("Escreva o primeiro numero: ");
	scanf("%f", &PrimeiroNumero);
	
	printf("Escreva o segundo numero: ");
	scanf("%f", &segundoNumero);
	
	printf("=== Resposta ===\n");
	printf("\nA soma e: %.1f", soma(PrimeiroNumero, segundoNumero));
	printf("\nA subtracao e: %.1f", subtracao(PrimeiroNumero, segundoNumero));
	printf("\nA divisao e: %.1f", divisao(PrimeiroNumero, segundoNumero));
	printf("\nA multiplicacao e: %.1f", multiplicacao(PrimeiroNumero, segundoNumero));
	
	return 0;
	
}
