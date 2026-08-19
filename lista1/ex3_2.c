#include <stdio.h>

int main() {
    int N;
    int valor;
    int soma = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &valor);
        soma = soma + valor;
    }

    printf("%d\n", soma);

    return 0;
}