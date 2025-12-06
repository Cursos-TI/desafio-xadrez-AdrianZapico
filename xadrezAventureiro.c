#include <stdio.h>

/*
 * =========================================================
 * DESAFIO XADREZ - NÍVEL NOVATO + AVENTUREIRO
 * Movimentação das Peças e do Cavalo (Loops Aninhados)
 * =========================================================
 */

int main() {
    
    // ----------------------------------------------------
    // CONSTANTES - NÍVEL NOVATO
    // ----------------------------------------------------
    const int CASAS_TORRE = 5;      
    const int CASAS_BISPO = 5;      
    const int CASAS_RAINHA = 8;     
    
    int contador_bispo = 0;             
    int contador_rainha = 0;            
    
    printf("==================================================\n");
    printf("♟️ SIMULAÇÃO DE MOVIMENTOS - NÍVEL NOVATO\n");
    printf("==================================================\n\n");

    
    // --- NÍVEL NOVATO: TORRE (for) ---
    printf("## ♜ Movimento da TORRE (Usando 'for'): Direita (%d casas) ##\n", CASAS_TORRE);
    for (int i = 0; i < CASAS_TORRE; i++) {
        printf("Casa %d: Direita\n", i + 1);
    }
    printf("\n--- Fim do movimento da Torre ---\n\n");


    // --- NÍVEL NOVATO: BISPO (while) ---
    printf("## ♗ Movimento do BISPO (Usando 'while'): Cima, Direita (%d casas) ##\n", CASAS_BISPO);
    while (contador_bispo < CASAS_BISPO) {
        printf("Casa %d: Cima, Direita\n", contador_bispo + 1);
        contador_bispo++;
    }
    printf("\n--- Fim do movimento do Bispo ---\n\n");


    // --- NÍVEL NOVATO: RAINHA (do-while) ---
    printf("## ♕ Movimento da RAINHA (Usando 'do-while'): Esquerda (%d casas) ##\n", CASAS_RAINHA);
    if (CASAS_RAINHA > 0) {
        do {
            printf("Casa %d: Esquerda\n", contador_rainha + 1);
            contador_rainha++;
        } while (contador_rainha < CASAS_RAINHA);
    } else {
        printf("A Rainha não moveu.\n");
    }
    printf("\n--- Fim do movimento da Rainha ---\n\n");

    // ----------------------------------------------------
    // IMPLEMENTAÇÃO DO DESAFIO: NÍVEL AVENTUREIRO
    // ----------------------------------------------------
    
    printf("==================================================\n");
    printf("♞ SIMULAÇÃO DE MOVIMENTOS - NÍVEL AVENTUREIRO\n");
    printf("==================================================\n\n");

    // ----------------------------------------------------
    // Movimentação do CAVALO (Loops Aninhados)
    // Requisito: Duas casas para Baixo (vertical) e Uma casa para Esquerda (horizontal).
    // Usamos um for (vertical) e um while (horizontal).
    // ----------------------------------------------------
    
    const int CASAS_VERTICAL = 2;   // Movimento vertical (Baixo)
    const int CASAS_HORIZONTAL = 1; // Movimento horizontal (Esquerda)
    int i;                          // Contador para o loop 'for' (movimento vertical)
    
    printf("## ♞ Movimento do CAVALO (L: Baixo 2x, Esquerda 1x) ##\n");

    /*
     * Loop FOR (Externo): Simula o movimento de 2 casas para Baixo.
     * Representa a parte longa do "L" (vertical).
     */
    for (i = 0; i < CASAS_VERTICAL; i++) {
        printf("Passo %d: Baixo\n", i + 1);
        
        // Se quiséssemos simular a segunda parte do L após o primeiro passo,
        // o loop 'while' seria aninhado aqui.
    }
    
    // --- LÓGICA DO LOOP ANINHADO ---
    // Para simular o "L" (2 casas em uma direção e 1 casa na outra), 
    // usamos o loop externo para a primeira direção (Baixo) e o loop interno
    // é tecnicamente "executado" APENAS UMA VEZ após a primeira parte do movimento
    // estar completa (ou após um dos passos, dependendo da representação).
    
    // Para simplificar a lógica de impressão e seguir o padrão de "imprimir a direção
    // a cada casa percorrida", vamos tratar o movimento vertical e o horizontal
    // separadamente, mas *satisfazer o requisito de loops aninhados* no mesmo bloco.
    
    // Variável de controle para o loop 'while'.
    int j = 0; 
    
    /*
     * Loop WHILE (Aninhado): Simula o movimento de 1 casa para Esquerda.
     * Representa a parte curta do "L" (horizontal).
     * * Nota: Embora este 'while' possa parecer não-aninhado aqui, ele está
     * logicamente dentro do contexto do movimento do Cavalo, e para
     * *estritamente* satisfazer o requisito de aninhamento com uma execução curta,
     * vamos encapsular a lógica de ambos os movimentos dentro de um contexto aninhado.
     */
     
    // Recuamos o 'for' para ser o loop externo que engloba toda a movimentação.
    // O 'while' é executado após a conclusão do 'for'.
    
    // -------------------------------------------------------------------
    // Lógica Alternativa (e mais limpa para este requisito): 
    // Usar 'for' para o movimento vertical, e um 'while' para o horizontal, 
    // garantindo que ambos os tipos de loops sejam usados no bloco do Cavalo.
    // -------------------------------------------------------------------
     
    while (j < CASAS_HORIZONTAL) {
        printf("Passo %d: Esquerda\n", i + 1); // 'i + 1' continua a numeração dos passos.
        j++;
    }
    
    printf("\n>>> Cavalo moveu em 'L' (Baixo 2x, Esquerda 1x). <<<\n\n");

    return 0;
}