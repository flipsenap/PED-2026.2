#include <stdio.h>

// Função recursiva que calcula a soma dos algarismos de n
int somaDigitos(int n) {

    // Caso base:
    // Quando n possui apenas um algarismo,
    // esse algarismo é a própria soma.
    if (n < 10) {
        return n;
    }

    // n % 10 pega o último algarismo
    // n / 10 remove o último algarismo
    return (n % 10) + somaDigitos(n / 10);
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("A soma dos algarismos e: %d\n", somaDigitos(n));

    return 0;
}