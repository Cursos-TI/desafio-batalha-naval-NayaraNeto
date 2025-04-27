#include <stdio.h>

#define TAMANHO 10

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0}; // Inicializa o tabuleiro com 0
    
    // Posicionamento dos Navios
    // Navio 1: Horizontal
    for (int i = 2; i < 6; i++) {
        tabuleiro[1][i] = 3;
    }

    // Navio 2: Vertical
    for (int i = 4; i < 8; i++) {
        tabuleiro[i][5] = 3;
    }

    // Navio 3: Diagonal principal
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][i] = 3;
    }

    // Navio 4: Diagonal secundária
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    // Exibir a numeração das colunas
    printf("\n    "); // Espaço para alinhar com a numeração das linhas
    for (int i = 1; i <= TAMANHO; i++) {
        printf("%2d ", i);
    }
    printf("\n");

    // Exibir o tabuleiro completo com numeração lateral, sem molduras
    for (int i = 0; i < TAMANHO; i++) {
        printf("%2d  ", i + 1); // Número da linha
        for (int j = 0; j < TAMANHO; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
