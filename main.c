#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "jogo.h"
int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Bem vindo ao Monopoly\n");
    tabuleiro t;
    Inicializa_tabuleiro(&t);

    preenche_tabuleiro("localidades.txt",&t);
    Imprime_Tabuleiro(&t);
    return 0;
}
