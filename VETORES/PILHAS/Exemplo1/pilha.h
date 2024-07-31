//implementação de pilha com vetores
#ifndef __PILHA_H__
#define __PILHA_H__
#include <stdbool.h>
#include <stdlib.h>

#define MAX 10

typedef struct _pilha
{
    int topo;
    int capacidade[MAX];
    int tamanho;
}Pilha;

void InicializarPilha(Pilha *P);

bool VerificaPilhaVazia(Pilha *P);

void Emplilhar(Pilha *P, int elemento); //Função PUSH

void Desempilha(Pilha *P); //Função POP

void ImprimeTopo(Pilha *P);

#endif