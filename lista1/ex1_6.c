#include <stdio.h>

int main() {
    float kmPorLitro, distancia, precoCombustivel;
    int pessoas;
    float litros, custoTotal, custoPorPessoa;

    scanf("%f", &kmPorLitro);
    scanf("%f", &distancia);
    scanf("%f", &precoCombustivel);
    scanf("%d", &pessoas);

    litros = distancia / kmPorLitro;
    custoTotal = litros * precoCombustivel;
    custoPorPessoa = custoTotal / pessoas;

    printf("%.2f\n", custoPorPessoa);

    return 0;
}