#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("%.2f\n", media);

    return 0;
}