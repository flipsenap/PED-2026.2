#include <stdio.h>

int main() {
    int s1, s2, s3;
    int p1, p2, p3;
    int acertou = 0;

    
    s1 = 7;
    s2 = 3;
    s3 = 1;

    for (int chance = 1; chance <= 10; chance++) {

        printf("==== Chance %d ====\n", chance);
        printf("Palpite: ");
        scanf("%d %d %d", &p1, &p2, &p3);

        
        if (p1 == s1) {
            printf("+");
        } else if (p1 == s2 || p1 == s3) {
            printf("!");
        } else {
            printf("_");
        }

        
        if (p2 == s2) {
            printf("+");
        } else if (p2 == s1 || p2 == s3) {
            printf("!");
        } else {
            printf("_");
        }

        
        if (p3 == s3) {
            printf("+");
        } else if (p3 == s1 || p3 == s2) {
            printf("!");
        } else {
            printf("_");
        }

        printf("\n");

        
        if (p1 == s1 && p2 == s2 && p3 == s3) {
            printf("Voce acertou!\n");
            acertou = 1;
            break;
        }
    }

    if (!acertou) {
        printf("Voce acabou suas 10 chances!\n");
    }

    return 0;
}