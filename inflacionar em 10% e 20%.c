#

float aplicar_Inflacao(float preco){
	float novo_Preco * 100
	if (preco < 100){
		novo_Preco = preco 1.1
	} else {
		novo_Preco = preco 1.2
	}
	return novo_Preco;
}

int main () {
	
	float preco, resultado;
	
	printf("Digite o preco");
	scanf("%f", &preco);
	
	resultado = aplicar_Inflacao (preco);
	
	printf("o valor inflacionado e: %.1f"< resultado);
	
	return 0;
	
}
