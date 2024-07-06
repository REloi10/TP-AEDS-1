#ifndef TABULEIRO_H_INCLUDED
#define TABULEIRO_H_INCLUDED
#include "localidade.h"
typedef localidade* Apontador;

typedef struct{
    Apontador primeiro;
    Apontador ultimo;
    int tamanho;
}tabuleiro;

void Inicializa_tabuleiro(tabuleiro *t);

#endif // TABULEIRO_H_INCLUDED
