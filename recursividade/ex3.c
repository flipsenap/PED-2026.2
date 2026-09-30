#include <stdio.h>

int potencia3(int n) {
    if (n == 1) {
        return 1;
    }

    return 3 * potencia3(n - 1);
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("%d\n", potencia3(n));

    return 0;
}

//potencia3(1) = 1
//potencia3(2) = 3 * 1  = 3
//potencia3(3) = 3 * 3  = 9
//potencia3(4) = 3 * 9  = 27
//potencia3(5) = 3 * 27 = 81
//potencia3(6) = 3 * 81 = 243