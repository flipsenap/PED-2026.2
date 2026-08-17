#include <stdio.h>

int main() {
    int idade;
    printf("Digite uma idade: ");
    scanf("%d", &idade);
    if (idade <= 11 && idade >=0) {
        printf("Criança!\n");
    } else if(idade >= 12 && idade <= 17) {
        printf("Adolescente!\n");
    } else if(idade >= 18 && idade <= 59) {
        printf("Adulto!");
    }else{
        printf("Idoso!!");
    }
    return 0;
}