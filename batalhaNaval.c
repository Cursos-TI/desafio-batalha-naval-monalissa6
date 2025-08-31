
#include <stdio.h>

#define TAM_TABULEIRO 10  // Tamanho do tabuleiro 10x10

// Função para exibir o tabuleiro
void exibir_tabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para posicionar navio horizontal
void posicionar_navio_horizontal(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x][y + i] = 3;
    }
}

// Função para posicionar navio vertical
void posicionar_navio_vertical(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x + i][y] = 3;
    }
}

// Função para posicionar navio diagonal (cima esquerda para baixo direita)
void posicionar_navio_diagonal(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x + i][y + i] = 3;
    }
}

int main() {
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0}; // Inicializa o tabuleiro com zeros (sem navios)
    
    // Posicionar 4 navios
    // Navio horizontal em (2, 2) com tamanho 4
    posicionar_navio_horizontal(tabuleiro, 2, 2, 4);
    // Navio vertical em (0, 5) com tamanho 3
    posicionar_navio_vertical(tabuleiro, 0, 5, 3);
    // Navio diagonal em (4, 0) com tamanho 4
    posicionar_navio_diagonal(tabuleiro, 4, 0, 4);
    // Outro navio diagonal em (6, 3) com tamanho 3
    posicionar_navio_diagonal(tabuleiro, 6, 3, 3);

    // Exibir o tabuleiro com os navios posicionados
    printf("Tabuleiro de Batalha Naval (1 = água, 3 = navio):\n");
    exibir_tabuleiro(tabuleiro);

    return 0;
}
