#include <stdio.h>

/*
 * =========================================================
 * DESAFIO XADREZ - NÍVEL NOVATO 
 * Movimentando as Peças com Estruturas de Repetição
 * =========================================================
 *
 * Fiz a implementação das movimentações básicas das peças (Torre, Bispo, Rainha)
 * utilizando estruturas de repetição for, while e do-while, respectivamente.
 */

int main() {
    
    // ----------------------------------------------------
    // Sugestão: Declarar variáveis constantes para representar o número de casas.
    // ----------------------------------------------------
    
    const int CASAS_TORRE = 5;      // Torre: 5 casas para a direita
    const int CASAS_BISPO = 5;      // Bispo: 5 casas na diagonal Cima/Direita
    const int CASAS_RAINHA = 8;     // Rainha: 8 casas para a esquerda
    
    int contador_bispo = 0;             // Variável de controle para o 'while'
    int contador_rainha = 0;            // Variável de controle para o 'do-while'
    
    printf("==================================================\n");
    printf("♟️ SIMULAÇÃO DE MOVIMENTOS - NÍVEL NOVATO\n");
    printf("==================================================\n\n");

    
    // ----------------------------------------------------
    // Implementação de Movimentação da TORRE (Usando 'for')
    // ----------------------------------------------------
    
    printf("## ♜ Movimento da TORRE (Usando 'for'): Direita (%d casas) ##\n", CASAS_TORRE);
    
    // O loop 'for' é usado para repetir o movimento o número exato de casas.
    for (int i = 0; i < CASAS_TORRE; i++) {
        // i + 1 representa a casa atual que está sendo percorrida.
        printf("Casa %d: Direita\n", i + 1);
    }
    
    printf("\n--- Fim do movimento da Torre ---\n\n");


    // ----------------------------------------------------
    // Implementação de Movimentação do BISPO (Usando 'while')
    // ----------------------------------------------------
    
    printf("## ♗ Movimento do BISPO (Usando 'while'): Cima, Direita (%d casas) ##\n", CASAS_BISPO);
    
    // O loop 'while' verifica a condição (contador_bispo < 5) antes de cada execução.
    while (contador_bispo < CASAS_BISPO) {
        // Bispo move-se na diagonal, imprimindo as duas direções combinadas.
        printf("Casa %d: Cima, Direita\n", contador_bispo + 1);
        
        // **IMPORTANTE**: Incrementa-se a variável de controle para avançar.
        contador_bispo++;
    }
    
    printf("\n--- Fim do movimento do Bispo ---\n\n");


    // ----------------------------------------------------
    // Implementação de Movimentação da RAINHA (Usando 'do-while')
    // Sugestão: Simular a movimentação da Rainha para a esquerda (8 casas).
    // ----------------------------------------------------

    printf("## ♕ Movimento da RAINHA (Usando 'do-while'): Esquerda (%d casas) ##\n", CASAS_RAINHA);
    
    // O 'do-while' garante que o corpo do loop execute pelo menos uma vez.
    if (CASAS_RAINHA > 0) {
        do {
            // Rainha move-se para a Esquerda.
            printf("Casa %d: Esquerda\n", contador_rainha + 1);

            // Incrementa o contador.
            contador_rainha++;
            
        // A condição é verificada apenas após a primeira execução.
        } while (contador_rainha < CASAS_RAINHA);
    } else {
        printf("A Rainha não moveu (CASAS_RAINHA = 0).\n");
    }

    printf("\n--- Fim do movimento da Rainha ---\n\n");
    
    // As sugestões para Nível Aventureiro e Mestre não são implementadas aqui,
    // mas servem como guia para a próxima fase do seu trabalho.

    return 0;
}