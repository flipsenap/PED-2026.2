#include <stdio.h>

long fatorial(int n) {
    if (n == 0) {
        return 1;
    }

    return n * fatorial(n - 1);
}

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("%d! = %ld\n", n, fatorial(n));

    return 0;
}