#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Jogo.h"


void preenche_tabuleiro(FILE *arq, tabuleiro *t){
    arq = fopen(arq,"r");
    if (arq == NULL){
        printf("Erro ao abrir arquivo");
        exit(1);
    }

    localidade inicio;
    strcpy(inicio.endereco,"Início");
    t->primeiro->local = inicio;


    char vetorAux[200];
    while(fgets(vetorAux,200,arq)!= NULL){
        char *partes;

        char *endereco;
        char *cor;
        char *custo;
        char *aluguel;

        partes = strtok(vetorAux, ";");
        endereco = partes;

        partes = strtok(NULL, ";");
        cor = partes;

        partes = strtok(NULL, ";");
        custo = partes;

        partes = strtok(NULL, ";");
        aluguel = partes;

        localidade l;




        strcpy(l.endereco, endereco);
        strcpy(l.cor,cor);
        l.custo_de_compra = atoi(custo);
        l.valor_de_aluguel = atoi(aluguel);

        Insere_Localidade(&t,l);






    }
    //Impressão na tela;
    printf("\n--------------------------------------------------\n");
    printf("%s-->",t->primeiro->local.endereco);
    Imprime_Tabuleiro(&t);
    printf("%s\n",t->primeiro->local.endereco);
    printf("\n--------------------------------------------------\n");
}

