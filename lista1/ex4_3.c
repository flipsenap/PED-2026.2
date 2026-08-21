#include <stdio.h>

long fatorial(int n) {
    long resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado = resultado * i;
    }

    return resultado;
}

int main() {
    int n;
    long resultado;

    printf("Digite um numero: ");
    scanf("%d", &n);

    resultado = fatorial(n);

    printf("%d! = %ld\n", n, resultado);

    return 0;
}