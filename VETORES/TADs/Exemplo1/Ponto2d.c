#include "Ponto2d.h"
#include <stdio.h>
#include <math.h>

void ImprimirPonto(Ponto2d ponto){
    printf("(%.2lf, %.2lf)\n", ponto.x, ponto.y);
}

double ModuloPonto(Ponto2d ponto){
    double modulo = sqrt(ponto.x*ponto.x + ponto.y*ponto.y);
    return printf("%.2lf\n", modulo);
}

double SomaPonto(Ponto2d ponto1, Ponto2d ponto2){
    Ponto2d soma;
    soma.x = ponto1.x + ponto2.x;
    soma.y = ponto1.y + ponto2.y;
    return printf("(%.2lf, %.2lf)\n", soma.x, soma.y);
}