#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char palavra_estatica[100]; 
    char *palavra_dinamica = NULL; 
    size_t tamanho;

    printf("Digite uma palavra (sem espaços, até 99 caracteres): "); 
  
    if (scanf("%99s", palavra_estatica) != 1) {
        printf("Erro na leitura da palavra.\n");
        return 1;
    }
   
    tamanho = strlen(palavra_estatica) + 1;

    palavra_dinamica = (char *)malloc(tamanho * sizeof(char));
    if (palavra_dinamica == NULL) {
        printf("Erro: memória insuficiente.\n");
        return 1;
    }

    strcpy(palavra_dinamica, palavra_estatica);

    printf("Palavra armazenada dinamicamente: %s\n", palavra_dinamica);

    free(palavra_dinamica);

    return 0;
}
