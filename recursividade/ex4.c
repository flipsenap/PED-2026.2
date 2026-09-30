#include <stdio.h>

// Função recursiva que conta quantos algarismos existem em n
int contaDigitos(int n) {

    // Caso base:
    // Se n possui apenas um algarismo, retorna 1.
    if (n < 10) {
        return 1;
    }

    // Remove o último algarismo de n
    // e soma 1 ao resultado.
    return 1 + contaDigitos(n / 10);
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("O numero possui %d algarismos.\n", contaDigitos(n));

    return 0;
}