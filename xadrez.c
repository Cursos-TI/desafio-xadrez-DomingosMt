#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças

    // === Jogo de Xadrez em C ===

    // Objetivo:
    // Bispo - Mover 5 casas na diagonal superior direita
    // Torre - Mover 5 casas superior
    // Rainha - Mover 8 casas para a esquerda

    //Variáveis de movimento
    int cima = 0, esquerda = 0, direita = 0;

    printf("*** JOGO DE XADREZ EM C ***\n\n");

    // Lógica para a movimentação do Bispo | Estrutura while
    printf("Peça: Bispo\n");
    while ((cima < 5) && (direita < 5))
    {
        printf("Cima, Direita\n");
        cima++;
        direita++;
    }

    printf("\n"); //Espaçamento
    
    // Lógica para a movimentação da Torre | Estrutura for
    printf("Peça: Torre\n");
    for (direita = 0; direita < 5; direita++)
    {
        printf("Direita\n");
    }

    printf("\n"); //Espaçamento

    // Lógica para a movimentação da Rainha | Estrutura do-while
    printf("Peça: Rainha\n");
    do
    {
        printf("Esquerda\n");
        esquerda++;
    } while (esquerda < 8);

    //Fim do Jogo
    
    return 0;
}








    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
