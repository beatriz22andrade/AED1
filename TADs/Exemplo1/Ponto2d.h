#ifndef __PONTO2D_H__ //verificar se a biblioteca está definida 
#define __PONTO2D_H__

typedef struct _ponto
{
    double x, y;
}Ponto2d;

void ImprimirPonto(Ponto2d ponto);

double ModuloPonto(Ponto2d ponto);

double SomaPonto(Ponto2d ponto1, Ponto2d ponto2);

#endif