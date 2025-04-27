#include <stdio.h>

// Função para exibir o tabuleiro com letras no topo (A-J) e números na lateral (1-10)
void exibirTabuleiro(int tabuleiro[10][10]) {
    // Exibe as letras do topo
    printf("   "); // Espaço para alinhar os números da lateral
    for (char letra = 'A'; letra <= 'J'; letra++) {
        printf(" %c", letra); // Imprime as letras A até J
    }
    printf("\n"); // Pula para a próxima linha

    // Laço para percorrer as linhas do tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Imprime o número da linha (1 a 10) com formatação
        // Laço para percorrer as colunas do tabuleiro
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]); // Imprime o valor da célula (0 ou 3)
        }
        printf("\n"); // Pula para a próxima linha
    }
}

// Função para posicionar o navio horizontalmente
void posicionarNavioHorizontal(int tabuleiro[10][10], int linha, int coluna, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[linha][coluna + i] = 3;
    }
}

// Função para posicionar o navio verticalmente
void posicionarNavioVertical(int tabuleiro[10][10], int linha, int coluna, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[linha + i][coluna] = 3;
    }
}

int main() {
    // Inicializa o tabuleiro 10x10 com água (0)
    int tabuleiro[10][10] = {0};

    // Configurações dos navios
    // Navio horizontal
    int linhaNavioHorizontal = 2; // Terceira linha (linha 2, pois começa do 0)
    int colunaNavioHorizontal = 1; // Segunda coluna (coluna 1)
    int tamanhoNavioHorizontal = 3; // Tamanho fixo de 3

    // Navio vertical
    int linhaNavioVertical = 5; // Sexta linha
    int colunaNavioVertical = 4; // Quinta coluna
    int tamanhoNavioVertical = 3; // Tamanho fixo de 3

    // Posiciona os navios no tabuleiro
    posicionarNavioHorizontal(tabuleiro, linhaNavioHorizontal, colunaNavioHorizontal, tamanhoNavioHorizontal);
    posicionarNavioVertical(tabuleiro, linhaNavioVertical, colunaNavioVertical, tamanhoNavioVertical);

    // Exibe o tabuleiro completo
    exibirTabuleiro(tabuleiro);

    return 0;
}
