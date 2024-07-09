#ifndef JOGADOR_H_INCLUDED
#define JOGADOR_H_INCLUDED
typedef struct{
    char nome[50];
    float dinheiro;
    int numero;
    char cor[15];
    localidade *Localidades;
    tabuleiro *posicao;

}jogador;




#endif // JOGADOR_H_INCLUDED
