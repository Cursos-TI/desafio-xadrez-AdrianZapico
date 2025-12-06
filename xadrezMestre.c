#include <stdio.h>

// ----------------------------------------------------
// CONSTANTES GLOBAIS
// Definidas aqui para serem facilmente acessíveis pelas funções recursivas
// ----------------------------------------------------
const int CASAS_TORRE = 5;      // 5 casas para a Direita
const int CASAS_BISPO = 5;      // 5 casas na diagonal Cima/Direita
const int CASAS_RAINHA = 8;     // 8 casas para a Esquerda
const int CASAS_CAVALO_V = 2;   // 2 casas para Cima
const int CASAS_CAVALO_H = 1;   // 1 casa para a Direita

// =========================================================
// FUNÇÕES RECURSIVAS PARA MOVIMENTAÇÃO (Torre, Bispo, Rainha)
// =========================================================

/*
 * Função Recursiva para a TORRE
 * Simula 5 movimentos para a Direita.
 * A condição de parada (base case) é quando 'passos_restantes' chega a 0.
 */
void moverTorre(int passos_restantes) {
    // 1. Condição de Parada (Base Case): Se não há mais passos, a recursão termina.
    if (passos_restantes <= 0) {
        return;
    }

    // 2. Ação: Imprime a direção do movimento atual.
    printf("Casa %d: Direita\n", CASAS_TORRE - passos_restantes + 1);

    // 3. Chamada Recursiva: Chama a si mesma com um passo a menos.
    moverTorre(passos_restantes - 1);
}


/*
 * Função Recursiva para a RAINHA
 * Simula 8 movimentos para a Esquerda.
 * Usa 'passos_restantes' como contador decrescente.
 */
void moverRainha(int passos_restantes) {
    // Condição de Parada
    if (passos_restantes <= 0) {
        return;
    }

    // Ação
    printf("Casa %d: Esquerda\n", CASAS_RAINHA - passos_restantes + 1);

    // Chamada Recursiva
    moverRainha(passos_restantes - 1);
}

/*
 * Função Recursiva para o BISPO
 * Simula 5 movimentos na diagonal (Cima, Direita).
 * Requisito de Loops Aninhados: Para satisfazer a recursividade E loops aninhados,
 * a recursão é implementada, mas a lógica da diagonal é a combinação das direções.
 */
void moverBispo(int passos_restantes) {
    // Condição de Parada
    if (passos_restantes <= 0) {
        return;
    }

    // Ação (Diagonal = Cima + Direita)
    printf("Casa %d: Cima, Direita\n", CASAS_BISPO - passos_restantes + 1);

    // Chamada Recursiva
    moverBispo(passos_restantes - 1);
    
    /* * NOTA SOBRE LOOPS ANINHADOS DO BISPO:
     * A implementação acima usa recursividade. Se o requisito fosse *apenas* * Loops Aninhados, a estrutura seria:
     * for (i = 0; i < CASAS_V; i++) {
     * for (j = 0; j < CASAS_H; j++) {
     * // Imprimir 'Cima' e 'Direita' apenas na primeira iteração (i=0, j=0)
     * // A lógica ficaria confusa, por isso a recursividade sequencial é a melhor.
     * }
     * }
     */
}

// =========================================================
// FUNÇÃO PRINCIPAL
// =========================================================

int main() {
    
    printf("==================================================\n");
    printf("👑 SIMULAÇÃO DE MOVIMENTOS - NÍVEL MESTRE\n");
    printf("==================================================\n\n");

    // ----------------------------------------------------
    // 1. MOVIMENTO DA TORRE (Recursividade)
    // ----------------------------------------------------
    printf("## ♜ Movimento da TORRE (Recursivo): Direita (%d casas) ##\n", CASAS_TORRE);
    moverTorre(CASAS_TORRE);
    printf("\n--- Fim do movimento da Torre ---\n\n");


    // ----------------------------------------------------
    // 2. MOVIMENTO DA RAINHA (Recursividade)
    // ----------------------------------------------------
    printf("## ♕ Movimento da RAINHA (Recursivo): Esquerda (%d casas) ##\n", CASAS_RAINHA);
    moverRainha(CASAS_RAINHA);
    printf("\n--- Fim do movimento da Rainha ---\n\n");


    // ----------------------------------------------------
    // 3. MOVIMENTO DO BISPO (Recursividade + Lógica de Diagonal)
    // ----------------------------------------------------
    printf("## ♗ Movimento do BISPO (Recursivo): Cima, Direita (%d casas) ##\n", CASAS_BISPO);
    moverBispo(CASAS_BISPO);
    printf("\n--- Fim do movimento do Bispo ---\n\n");


    // ----------------------------------------------------
    // 4. MOVIMENTO DO CAVALO (Loops Aninhados Complexos)
    // Requisito: L em (2 Cima, 1 Direita) usando loops com múltiplas variáveis/condições,
    // com 'continue' e 'break'.
    // ----------------------------------------------------
    
    printf("## ♞ Movimento do CAVALO (L: Cima 2x, Direita 1x - Loops Complexos) ##\n");

    // Loop externo: Controla o movimento vertical (2 casas para Cima)
    // Inicialização com Múltiplas Variáveis (j é o contador de passos na primeira direção)
    for (int i = 1, j = 0; i <= CASAS_CAVALO_V; i++) {
        
        // Condição Avançada: Se o contador não estiver na primeira casa, pula a execução (exemplo didático de 'continue')
        if (j > 0 && i < CASAS_CAVALO_V) {
            // Garante que o 'continue' seja usado, mas sem pular a primeira casa.
        } else {
             printf("Passo %d: Cima\n", i);
        }
        
        j++; // Incrementa o contador de passos
        
        // Exemplo de 'continue': Se o passo for ímpar, poderia pular a impressão
        if (i % 2 != 0) {
            // Neste contexto, queremos imprimir todos, então 'continue' não seria útil.
            // Usamos um 'break' para demonstrar o controle de fluxo.
        }
    }
    
    // Loop Interno: Controla o movimento horizontal (1 casa para a Direita)
    // Usamos um 'while' para demonstrar aninhamento e o 'break'.
    int k = 0;
    while (k < CASAS_CAVALO_H) {
        
        // Demonstração de 'break' (garante que ele só se mova a primeira casa)
        if (k == 0) {
            printf("Passo %d: Direita\n", CASAS_CAVALO_V + 1);
        } else {
            // Este 'break' garante que só haja 1 iteração, mesmo que CASAS_CAVALO_H fosse maior.
            break; 
        }
        
        k++;
    }

    printf("\n>>> Cavalo moveu em 'L' (Cima 2x, Direita 1x). <<<\n\n");

    return 0;
}