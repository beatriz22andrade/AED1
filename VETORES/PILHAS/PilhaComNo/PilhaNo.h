//pilha baseada em nós
#ifndef __PILHANO_H__
#define __PILHANO_H__
#include <stdbool.h>

#define MAX 10

//define o nó
typedef struct _no
{
    int elemento;
}No;

//define a pilha
typedef struct _pilha
{
    No capacidade[MAX];
    int topo;
}Pilha;

void InicializaPilha(Pilha *P);

bool VerificaPilhaVazia(Pilha *P);

void Emplilhar(Pilha *P, int dado); //Função PUSH

void Desempilhar(Pilha *P); // Função POP

void ImprimeTopo(Pilha *P);

#endif