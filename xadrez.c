#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int bispo = 5;
    int torre = 5;
    int rainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimento do Bispo:\n");
    for (int i = 1; i <= bispo; i++) {
        printf("Diagonal direita, cima (passo %d)\n", i);
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimento da Torre:\n");
    for (int i = 1; i <= torre; i++) {
        printf("Direita (passo %d)\n", i);
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimento da Rainha:\n");
    for (int i = 1; i <= rainha; i++) {
        printf("Esquerda (passo %d)\n", i);
    }

    return 0;
}
