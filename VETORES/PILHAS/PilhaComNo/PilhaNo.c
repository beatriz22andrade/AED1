#include "PilhaNo.h"
#include <stdio.h>

void InicializaPilha(Pilha *P){
    P->topo = -1; 
}

bool VerificaPilhaVazia(Pilha *P){
    if(P->topo == -1){
        return printf("Pilha vazia.\n");
    }else{
        return printf("Ha elemento na sua pilha.\n");
    }
}

void Emplilhar(Pilha *P, int dado){
    P->topo ++;
    P->capacidade[P->topo].elemento = dado;
}

void Desempilhar(Pilha *P){
    int dado = P->capacidade[P->topo].elemento;
    P->topo --;
    printf("Elemento %d removido.\n", dado);
}

void ImprimeTopo(Pilha *P){
    printf("Elemento no topo da pilha: %d\n", P->capacidade[P->topo]);
}