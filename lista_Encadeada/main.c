#include <stdio.h>
#include "lista.h"

int main() {

    // Cria uma lista vazia
    Lista lista;

    lista.cabeca = NULL;
    lista.tamanho = 0;


    // ==========================================
    // INSERINDO ELEMENTOS
    // ==========================================

    printf("=== INSERCOES ===\n");

    // Insere no início
    insert(&lista, 0, 10);

    printf("Inserindo 10 no inicio:\n");
    show(&lista);
    printf("Tamanho: %d\n\n", lista.tamanho);


    // Insere no final
    insert(&lista, 1, 30);

    printf("Inserindo 30 no final:\n");
    show(&lista);
    printf("Tamanho: %d\n\n", lista.tamanho);


    // Insere no meio
    insert(&lista, 1, 20);

    printf("Inserindo 20 no meio:\n");
    show(&lista);
    printf("Tamanho: %d\n\n", lista.tamanho);


    // Insere outro elemento no final
    insert(&lista, 3, 40);

    printf("Inserindo 40 no final:\n");
    show(&lista);
    printf("Tamanho: %d\n\n", lista.tamanho);


    // Tenta inserir em uma posição inválida
    printf("Tentando inserir na posicao 10:\n");
    insert(&lista, 10, 50);

    show(&lista);
    printf("Tamanho: %d\n\n", lista.tamanho);


    // ==========================================
    // ACESSANDO ELEMENTOS
    // ==========================================

    printf("=== ACESSAR ===\n");

    printf("Valor na posicao 0: %d\n",
           acessar(&lista, 0));

    printf("Valor na posicao 2: %d\n",
           acessar(&lista, 2));

    printf("Valor na posicao 3: %d\n",
           acessar(&lista, 3));

    printf("\n");


    // ==========================================
    // REMOVENDO O PRIMEIRO
    // ==========================================

    printf("=== REMOVER PRIMEIRO ===\n");

    remover(&lista, 0);

    show(&lista);
    printf("Tamanho: %d\n\n", lista.tamanho);


    // ==========================================
    // REMOVENDO DO MEIO
    // ==========================================

    printf("=== REMOVER DO MEIO ===\n");

    remover(&lista, 1);

    show(&lista);
    printf("Tamanho: %d\n\n", lista.tamanho);


    // ==========================================
    // REMOVENDO O ULTIMO
    // ==========================================

    printf("=== REMOVER ULTIMO ===\n");

    remover(&lista, lista.tamanho - 1);

    show(&lista);
    printf("Tamanho: %d\n\n", lista.tamanho);


    // ==========================================
    // LIBERANDO A LISTA
    // ==========================================

    liberar(&lista);

    printf("=== LISTA LIBERADA ===\n");

    show(&lista);
    printf("Tamanho: %d\n", lista.tamanho);


    return 0;
}