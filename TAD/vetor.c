#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

// Adiciona um novo elemento ao final do vetor
void append(Vetor *v, int valor) {

    // Verifica se o vetor está cheio
    if (v->tamanho_ocupado == v->tamanho_alocado) {

        // Dobra o espaço reservado
        v->tamanho_alocado *= 2;

        // Realoca a memória com o novo tamanho
        v->dados = realloc(
            v->dados,
            v->tamanho_alocado * sizeof(int)
        );
    }

    // Coloca o novo valor na próxima posição disponível
    v->dados[v->tamanho_ocupado] = valor;

    // Aumenta a quantidade de elementos utilizados
    v->tamanho_ocupado++;
}


// Mostra todos os elementos ocupados do vetor
void show(Vetor *v) {

    printf("[");

    // Percorre somente os elementos que estão sendo utilizados
    for (int i = 0; i < v->tamanho_ocupado; i++) {

        printf("%d", v->dados[i]);

        // Coloca vírgula entre os elementos
        if (i < v->tamanho_ocupado - 1) {
            printf(", ");
        }
    }

    printf("]\n");
}


// Cria um novo vetor contendo os elementos do intervalo [x0, x1]
Vetor slice(Vetor *v, int x0, int x1) {

    Vetor novo;

    // Calcula quantos elementos serão copiados
    int quantidade = x1 - x0 + 1;

    // O novo vetor terá exatamente o tamanho necessário
    novo.tamanho_alocado = quantidade;
    novo.tamanho_ocupado = quantidade;

    // Aloca memória para os elementos
    novo.dados = malloc(quantidade * sizeof(int));

    // Copia os elementos do vetor original
    for (int i = 0; i < quantidade; i++) {
        novo.dados[i] = v->dados[x0 + i];
    }

    return novo;
}


// Remove o último elemento do vetor
void pop(Vetor *v) {

    // Só remove se houver elementos no vetor
    if (v->tamanho_ocupado > 0) {
        v->tamanho_ocupado--;
    }
}