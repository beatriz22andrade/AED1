#include "pilha.h"

int main(){

    Pilha pilha;

    InicializarPilha(&pilha);
    VerificaPilhaVazia(&pilha);

    Emplilhar(&pilha, 7);
    ImprimeTopo(&pilha);
    Emplilhar(&pilha, 10);
    ImprimeTopo(&pilha);
    Desempilha(&pilha);
    ImprimeTopo(&pilha);

    return 0;
}