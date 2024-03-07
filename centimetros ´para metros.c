#include <stdio.h>

float centimetros_para_Metros(int numero){
	
	return  numero * 100;
}

	int main () {
		float numero, resultado;
		
		printf("Digite o numer oem metros: ");
		scanf("%1.f", &numero);
		
		resultado = centimetros_para_Metros(numero);
		
		printf("results")
		printf("Resultado: %.1f centimetros. \n", resultado);
		
		return 0
		
	}


