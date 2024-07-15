#ifndef JOGADOR_H_INCLUDED
#define JOGADOR_H_INCLUDED
#include "localidade.h"
#include "tabuleiro.h"
typedef struct{
    char nome[100];
    float dinheiro;
    int numero;
    char cor[20];
    localidade *Localidades;
    tabuleiro *posicao;

}jogador;



#endif // JOGADOR_H_INCLUDED
