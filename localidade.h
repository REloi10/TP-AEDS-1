#ifndef LOCALIDADE_H_INCLUDED
#define LOCALIDADE_H_INCLUDED

typedef struct{
    char endereco[100];
    char cor[15];
    float custo_de_compra;
    float valor_de_aluguel;
}localidade;


typedef struct Celula {
 localidade local;
 struct Celula* prox;
}Celula;

typedef Celula* Apontador;



#endif // LOCALIDADE_H_INCLUDED
