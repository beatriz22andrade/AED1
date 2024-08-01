#include "PilhaDinamica.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void InicializaPilha(Pilha *P){
    P->capacidade = 10; //capacidade inicial
    P->topo = -1; //pilha inicialmente vazia
    P->elementos = (int*)calloc(1, P->capacidade * sizeof(int)); //aloca memória para os elementos
    if(!P->elementos){
        printf("Erro ao alocar memoria.\n");
    }else{
        printf("Memoria alocada.\n");
    }
}

bool Pilhavazia(Pilha *P){ //verifica se a pilha está vazia
    if(P->topo = -1){
        printf("Pilha inicialemente vazia.\n");
    }else{
        printf("Existe elementos na pilha.\n");
    }
}

void Emplilhar(Pilha *P, int dado){
    
}