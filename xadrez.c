#include <stdio.h>

// Desafio de Xadrez - MateCheck (nível Aventureiro)
// Aluno Washington Melo

int main() {
    printf("*** Jogo de Xadrez - Aventureiro ***\n\n");

    printf("*** Movimentos da Torre - 5 casas para a direita ***\n\n");

    //Torre - Movimentando

    for (int i = 0; i < 5; i++) {
        printf("Torre - Direita\n");
    }
    
    printf("\n*** Movimentos do Bispo  - 5 casas para a diagonal superior direita ***\n\n");

    //Bispo - Movimentando 

    // Variável para os movimentos do bispo
    int i = 0;
    
    while (i < 5) {
        printf("Bispo - Cima\n");
        printf("Bispo - Direita\n");

        i++;
    }

    printf("\n*** Movimentos da Rainha - 8 casas para a esquerda ***\n\n");

    //Rainha - Movimentando
    // Variável para os movimentos da rainha

    int j = 0;

    do {
        printf("Rainha - Esquerda\n");
        j++;
    } while (j < 8);

    printf("\n===========================================================================\n");

    printf("\n*** Movimentos do Cavalo - 2 casas para baixo e 1 casa para a esquerda ***\n\n");

    for (int k = 0; k < 1; k++) //Variável de movimentação do cavalo para a esquerda
    {
        int l = 2; //Variável de movimentação do cavalo para baixo
        while (l > 0) {
            printf("Cavalo - Baixo\n");
            l--;
        }
        printf("Cavalo - Esquerda\n");
    
    }
    

    return 0;
}