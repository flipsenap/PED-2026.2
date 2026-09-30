#ifndef LISTA_H
#define LISTA_H

// Estrutura de um nó da lista
typedef struct No {
    int valor;              // Valor armazenado no nó
    struct No *proximo;     // Ponteiro para o próximo nó
} No;

// Estrutura que representa a lista
typedef struct {
    No *cabeca;             // Ponteiro para o primeiro nó
    int tamanho;            // Quantidade de nós da lista
} Lista;

// Insere um valor na posição indicada
void insert(Lista *l, int pos, int valor);

// Mostra todos os elementos da lista
void show(Lista *l);

// Acessa o valor de uma determinada posição
int acessar(Lista *l, int pos);

// Remove o nó de uma determinada posição
void remover(Lista *l, int pos);

// Libera todos os nós da lista
void liberar(Lista *l);

#endif