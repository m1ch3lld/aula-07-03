#include <stdio.h>

// Fun��o para verificar se um n�mero � par ou �mpar
void verificarParOuImpar(int numero) {
    if (numero % 2 == 0) {
        printf("%d � um n�mero par.\n", numero);
    } else {
        printf("%d � um n�mero �mpar.\n", numero);
    }
}

int main() {
    int numero;

    // Solicita ao usu�rio que insira um n�mero
    printf("Insira um n�mero inteiro: ");
    scanf("%d", &numero);

    // Chama a fun��o para verificar se o n�mero � par ou �mpar
    verificarParOuImpar(numero);

    return 0;
}
	

