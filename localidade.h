#ifndef LOCALIDADE_H_INCLUDED
#define LOCALIDADE_H_INCLUDED

typedef struct Celula{
    int endereco;
    char cor;
    float custo_de_compra;
    float valor_de_aluguel;
    struct Celula *prox;
    ///////
}localidade;

#endif // LOCALIDADE_H_INCLUDED
