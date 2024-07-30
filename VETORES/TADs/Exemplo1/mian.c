#include "Ponto2d.h"

int main(){

    Ponto2d A = {2,5};
    Ponto2d B = {4,1};
    Ponto2d C = {1,6};

    ImprimirPonto(A);
    ImprimirPonto(B);
    ImprimirPonto(C);

    ModuloPonto(A);
    ModuloPonto(B);
    ModuloPonto(C);

    SomaPonto(A,B);
    SomaPonto(A,C);
    SomaPonto(B,C);

}