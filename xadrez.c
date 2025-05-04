#include <stdio.h>

// Desafio de Xadrez - MateCheck (nível Mestre)
// Aluno Washington Melo

// Este código simula os movimentos de peças de xadrez (Torre, Bispo, Rainha e Cavalo) em um tabuleiro de xadrez.

//Funções recursivas para movimentação das peças (Torre, Bispo e Rainha)

void moverTorre(int casasTorre) {        // Função recursiva para mover a torre
    if (casasTorre > 0) {                // Verifica se ainda há casas para mover até o limite estabelecido
        printf("Torre - Direita\n");     // imprime o movimento da torre para a direita
        moverTorre(casasTorre - 1);      // Chama a função recursiva para mover a torre (decrescendo)
    }
}

void moverBispo(int casasBispo) {        // Função recursiva para mover o bispo
    if (casasBispo > 0) {                // Verifica se ainda há casas para mover até o limite estabelecido
        if (casasBispo > 0) {            // Aninhamento, verifica se ainda há casas para mover até o limite estabelecido
            printf("Bispo - Direita\n"); // imprime o movimento do bispo para a direita (loop interno)
        }
        printf("Bispo - Cima\n");        // imprime o movimento do bispo para cima (loop externo)
        moverBispo(casasBispo - 1);      // Chama a função recursiva para mover o bispo (decrescendo)
    }
}

void moverRainha(int casasRainha) {      // Função recursiva para mover a rainha
    if (casasRainha > 0) {               // Verifica se ainda há casas para mover até o limite estabelecido
        printf("Rainha - Esquerda\n");   // imprime o movimento da rainha para a esquerda
        moverRainha(casasRainha - 1);    // Chama a função recursiva para mover a rainha (decrescendo)
    }
}

// Função principal
    
int main() {

    printf("*** Jogo de Xadrez - Nível Mestre ***");

    printf("\n\n*** Movimentos da Torre - 5 casas para a direita ***\n\n");
    
    //Torre - Movimentando

    moverTorre(5); // Chama a função recursiva para mover a torre 5 casas para a direita
    
    printf("\n*** Movimentos do Bispo  - 5 casas para a diagonal superior direita ***\n\n");

    //Bispo - Movimentando 

    moverBispo(5); // Chama a função recursiva para mover o Bispo 5 casas para a diagonal superior direita

    printf("\n*** Movimentos da Rainha - 8 casas para a esquerda ***\n\n");

    //Rainha - Movimentando
    
    moverRainha(8); // Chama a função recursiva para mover a Rainha 8 casas para a esquerda

    printf("\n*** Movimentos do Cavalo - 2 casas para cima e 1 casa para a direita ***\n\n");

    int i;

    for (int i = 0; i < 1; i++) {         // Variável de movimentação do cavalo para a direita (loop externo)
        for (int j = 0; j < 2; j++) {     // Aninhamento, variável de movimentação do cavalo para cima (loop interno)
            printf("Cavalo - Cima\n");    // imprime o movimento do cavalo para cima
        }
        printf("Cavalo - Direita\n");     // imprime o movimento do cavalo para a direita
    }
    return 0;
}