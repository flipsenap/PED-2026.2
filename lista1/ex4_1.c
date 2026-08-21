#include <stdio.h>

int maior(int a, int b, int c) {
    int maiorValor = a;

    if (b > maiorValor) {
        maiorValor = b;
    }

    if (c > maiorValor) {
        maiorValor = c;
    }

    return maiorValor;
}

int main() {
    int a, b, c;
    int resultado;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    resultado = maior(a, b, c);

    printf("O maior valor e: %d\n", resultado);

    return 0;
}