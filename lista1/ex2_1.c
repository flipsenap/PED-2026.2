#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("O numero é par!\n");
    } else {
        printf("O numero é impar!\n");
    }
    return 0;
}