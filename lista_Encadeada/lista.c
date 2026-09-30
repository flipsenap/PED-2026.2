#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


// Insere um novo valor na posição indicada
void insert(Lista *l, int pos, int valor) {

    // Verifica se a posição é inválida
    // A posição pode ser de 0 até tamanho.
    if (pos < 0 || pos > l->tamanho) {
        printf("Posicao invalida!\n");
        return;
    }

    // Cria um novo nó dinamicamente
    No *novo = malloc(sizeof(No));

    // Verifica se a memória foi alocada corretamente
    if (novo == NULL) {
        printf("Erro ao alocar memoria!\n");
        return;
    }

    // Coloca o valor no novo nó
    novo->valor = valor;


    // ------------------------------------------------
    // CASO 1: Inserção no início da lista
    // ------------------------------------------------

    if (pos == 0) {

        // O novo nó aponta para a antiga cabeça
        novo->proximo = l->cabeca;

        // A cabeça passa a ser o novo nó
        l->cabeca = novo;

    } else {

        // ------------------------------------------------
        // CASO 2: Inserção no meio ou no final
        // ------------------------------------------------

        // Começamos pela cabeça
        No *atual = l->cabeca;

        // Caminhamos até o nó anterior à posição desejada.
        //
        // Exemplo:
        // Lista: 10 -> 20 -> 30
        // pos = 2
        //
        // Precisamos parar no 20.
        for (int i = 0; i < pos - 1; i++) {
            atual = atual->proximo;
        }

        // Primeiro fazemos o novo nó apontar
        // para o nó que estava na posição desejada.
        //
        // Antes:
        // 20 -> 30
        //
        // Depois:
        // 20 -> novo -> 30
        novo->proximo = atual->proximo;

        // Agora fazemos o nó anterior apontar
        // para o novo nó.
        atual->proximo = novo;
    }

    // Aumenta a quantidade de nós
    l->tamanho++;
}


// Mostra todos os elementos da lista
void show(Lista *l) {

    // Começa pela cabeça
    No *atual = l->cabeca;

    // Percorre a lista até encontrar NULL
    while (atual != NULL) {

        printf("%d -> ", atual->valor);

        // Avança para o próximo nó
        atual = atual->proximo;
    }

    printf("NULL\n");
}


// Retorna o valor armazenado na posição indicada
int acessar(Lista *l, int pos) {

    // Verifica se a posição é válida
    if (pos < 0 || pos >= l->tamanho) {
        printf("Posicao invalida!\n");
        return -1;
    }

    // Começa pela cabeça
    No *atual = l->cabeca;

    // Caminha até a posição desejada
    for (int i = 0; i < pos; i++) {
        atual = atual->proximo;
    }

    // Retorna o valor encontrado
    return atual->valor;
}


// Remove um nó da posição indicada
void remover(Lista *l, int pos) {

    // Verifica se a posição é válida
    if (pos < 0 || pos >= l->tamanho) {
        printf("Posicao invalida!\n");
        return;
    }

    No *removido;


    // ------------------------------------------------
    // CASO 1: Remover o primeiro nó
    // ------------------------------------------------

    if (pos == 0) {

        // Guarda o nó que será removido
        removido = l->cabeca;

        // A cabeça passa a ser o segundo nó
        l->cabeca = l->cabeca->proximo;

    } else {

        // ------------------------------------------------
        // CASO 2: Remover do meio ou do final
        // ------------------------------------------------

        // Começa pela cabeça
        No *atual = l->cabeca;

        // Caminha até o nó anterior ao que será removido
        for (int i = 0; i < pos - 1; i++) {
            atual = atual->proximo;
        }

        // Guarda o nó que será removido
        removido = atual->proximo;

        // Pula o nó removido
        atual->proximo = removido->proximo;
    }

    // Libera a memória do nó removido
    free(removido);

    // Diminui o tamanho da lista
    l->tamanho--;
}


// Libera todos os nós da lista
void liberar(Lista *l) {

    // Começa pela cabeça
    No *atual = l->cabeca;

    // Percorre todos os nós
    while (atual != NULL) {

        // Guarda o próximo nó
        No *proximo = atual->proximo;

        // Libera o nó atual
        free(atual);

        // Avança para o próximo
        atual = proximo;
    }

    // Deixa a lista vazia
    l->cabeca = NULL;
    l->tamanho = 0;
}