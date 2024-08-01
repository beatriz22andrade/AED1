#ifndef __PILHADINAMICA_H__
#define __PILHADINAMICA_H__
#include <stdbool.h>

typedef struct _pilha{
    int *elementos;
    int topo;
    int capacidade;
}Pilha;

void InicializaPilha(Pilha *P); 

bool Pilhavazia(Pilha *P);

void Emplilhar(Pilha *P, int dado);

#endif