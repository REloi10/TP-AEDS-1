#ifndef LOCALIDADE_H_INCLUDED
#define LOCALIDADE_H_INCLUDED

typedef struct{
    char endereco[100];
    char cor[15];
    int custo_de_compra;
    int valor_de_aluguel;
}localidade;


typedef struct Celula {
 localidade local;
 struct Celula* prox;
}Celula;

typedef Celula* Apontador;

#endif // LOCALIDADE_H_INCLUDED
