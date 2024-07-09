#include <stdio.h>
#include <stdlib.h>
#include "tabuleiro.h"
void Inicializa_tabuleiro(tabuleiro *t){
    t->primeiro = (Apontador) malloc(sizeof(Celula));
    t->ultimo = t->primeiro;
    t->primeiro->prox = NULL;
    t->tamanho = 0;
}

void Insere_Localidade(tabuleiro *t, localidade l){
    t->primeiro->prox =(Celula*) malloc(sizeof(Celula));
    t->ultimo = t->primeiro->prox;
    t->ultimo->local = l;
    t->ultimo->prox = NULL;
    t->tamanho ++;
}

localidade Avanca_Casas(tabuleiro *t, int Casas){
    Apontador aux = t->primeiro;
    for (int i = 0; i <Casas; i++) {
        aux = aux->prox;
    }
    return aux->local;

}


void Imprime_Tabuleiro(tabuleiro t){
    Celula *aux = t.primeiro->prox;
    for(int i=0;i<t.tamanho;i++){
        printf("%s", aux->local.endereco);
        aux = aux->prox;
    }
}

