#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");

    scanf("%d", &num);

    if (num > 0) {
        printf("O numero é positivo!\n");
    } else if(num < 0){
        printf("O numero é negativo!\n");
    } else {
        printf("O numero é neutro! 0 ");
    }
    return 0;
}