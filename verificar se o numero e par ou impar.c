#include <stdio.h>

// Função para verificar se um número é par ou ímpar
void verificarParOuImpar(int numero) {
    if (numero % 2 == 0) {
        printf("%d é um número par.\n", numero);
    } else {
        printf("%d é um número ímpar.\n", numero);
    }
}

int main() {
    int numero;

    // Solicita ao usuário que insira um número
    printf("Insira um número inteiro: ");
    scanf("%d", &numero);

    // Chama a função para verificar se o número é par ou ímpar
    verificarParOuImpar(numero);

    return 0;
}
	

