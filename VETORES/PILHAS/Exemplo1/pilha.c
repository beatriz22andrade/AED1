#include "pilha.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void InicializarPilha(Pilha *P){
    P->topo = -1; //indica que a pilha está inicialmente vazia
    P->tamanho = 0;
}

bool VerificaPilhaVazia(Pilha *P){
    if(P->topo == -1){
        return printf("Pilha vazia.\n");
    }else{
        return printf("Ha elemento na sua pilha.\n");
    }
}

void Emplilhar(Pilha *P, int elemento){
    P->capacidade[++(P->topo)] = elemento; //o elemento inserido de torna o topo da pilha
    printf("Elemento inserido.\n");
    (P->tamanho) ++; //atualiza a quantidade de elementos na pilha
}

void ImprimeTopo(Pilha *P){
    printf("Elemento no topo: %d\n", P->capacidade[P->topo]);
    printf("Tamanho atual da pilha: %d\n", P->tamanho);
}