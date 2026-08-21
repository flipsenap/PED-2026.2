#include <stdio.h>

int main() {
    int numero;
    int quantidade = 0;
    int soma = 0;
    float media;

    printf("Digite um numero (-1 para parar): ");
    scanf("%d", &numero);

    while (numero != -1) {
        soma = soma + numero;
        quantidade++;

        printf("Digite um numero (-1 para parar): ");
        scanf("%d", &numero);
    }

    if (quantidade > 0) {
        media = (float)soma / quantidade;

        printf("\nQuantidade de numeros: %d\n", quantidade);
        printf("Media: %.2f\n", media);
    } else {
        printf("\nNenhum numero foi lido.\n");
    }

    return 0;
}