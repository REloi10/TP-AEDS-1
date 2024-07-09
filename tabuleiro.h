#ifndef TABULEIRO_H_INCLUDED
#define TABULEIRO_H_INCLUDED
#include "localidade.h"
typedef struct{
    Apontador primeiro;
    Apontador ultimo;
    int tamanho;
}tabuleiro;

void Inicializa_tabuleiro(tabuleiro *t);
void Insere_Localidade(tabuleiro *t, localidade l);
localidade Avanca_Casas(tabuleiro *t, int Casas);
void Imprime_Tabuleiro(tabuleiro t);
#endif // TABULEIRO_H_INCLUDED
