#include <stdio.h>

int main() {
    int n;
    int quantidade;
    int sapos = 0, ratos = 0, coelhos = 0;
    int total;

    char tipo;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %c", &quantidade, &tipo);

        if (tipo == 'S') {
            sapos += quantidade;
        } else if (tipo == 'R') {
            ratos += quantidade;
        } else if (tipo == 'C') {
            coelhos += quantidade;
        }
    }

    total = sapos + ratos + coelhos;

    printf("Total: %d\n", total);
    printf("Sapos: %d\n", sapos);
    printf("Ratos: %d\n", ratos);
    printf("Coelhos: %d\n", coelhos);

    printf("Percentual de sapos: %.2f%%\n", (sapos * 100.0) / total);
    printf("Percentual de ratos: %.2f%%\n", (ratos * 100.0) / total);
    printf("Percentual de coelhos: %.2f%%\n", (coelhos * 100.0) / total);

    return 0;
}