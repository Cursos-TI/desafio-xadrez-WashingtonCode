#include <stdio.h>

// Desafio de Xadrez - MateCheck (novato)
// Aluno Washington Melo

int main() {
    printf("*** Jogo de Xadrez - Novato ***\n\n");

    printf("*** Movimentos da Torre ***\n\n");

    //Torre - Movimentando 5 casas para a direita

    for (int i = 0; i < 5; i++) {
        printf("Torre - Movimento %d para a direita\n", i + 1);
    }
    
    printf("\n*** Movimentos do Bispo ***\n\n");

    //Bispo - Movimentando 5 casas para a diagonal superior direita
    // Variável para os movimentos do bispo

    int i = 0;
    
    while (i < 5) {
        printf("Bispo - Movimento %d para cima\n", i + 1);
        printf("Bispo - Movimento %d para a direita\n", i + 1);
        i++;
    }

    printf("\n*** Movimentos da Rainha ***\n\n");

    //Rainha - Movimentando 8 casas para a esquerda
    // Variável para os movimentos da rainha

    int j = 0;

    do {
        printf("Rainha - Movimento %d para a esquerda\n", j + 1);
        j++;
    } while (j < 8);

    return 0;

}