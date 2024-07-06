#include <stdio.h>
#include <stdlib.h>
#include "tabuleiro.h"
void Inicializa_tabuleiro(tabuleiro *t){
    t->primeiro = (Apontador) malloc(sizeof(localidade));
    t->ultimo = t->primeiro;
    t->primeiro->prox = NULL;
    t->tamanho = 0;
}
