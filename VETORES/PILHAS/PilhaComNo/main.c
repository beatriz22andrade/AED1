#include "PilhaNo.h"

int main(){

    Pilha pilha;

    InicializaPilha(&pilha);
    VerificaPilhaVazia(&pilha);
    Emplilhar(&pilha, 8);
    Emplilhar(&pilha, 12);
    ImprimeTopo(&pilha);
    Desempilhar(&pilha);
    ImprimeTopo(&pilha);

    return 0;
}