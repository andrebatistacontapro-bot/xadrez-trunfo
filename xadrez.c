#include <stdio.h>

// =============================================================
// PROTÓTIPOS DAS FUNÇÕES (NÍVEL MESTRE - RECURSIVIDADE)
// =============================================================
void moverTorre(int casas);
void moverBispo(int casas);
void moverRainha(int casas);
void moverCavalo();

// =============================================================
// FUNÇÃO PRINCIPAL
// =============================================================
int main() {
    int opcao;
    
    printf("\n==========================================\n");
    printf("     MOVIMENTAÇÃO DE PEÇAS DE XADREZ      \n");
    printf("==========================================\n\n");
    
    printf("Escolha o nível:\n");
    printf("1 - Nível Novato (Torre, Bispo, Rainha)\n");
    printf("2 - Nível Aventureiro (+ Cavalo)\n");
    printf("3 - Nível Mestre (Recursividade + Loops complexos)\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    
    printf("\n==========================================\n\n");
    
    // =========================================================
    // NÍVEL 1 - NOVATO (Estruturas básicas)
    // =========================================================
    if (opcao == 1) {
        printf("=== NÍVEL NOVATO ===\n\n");
        
        // TORRE - Usando FOR (5 casas para DIREITA)
        printf("Movimento da Torre (for):\n");
        for (int i = 0; i < 5; i++) {
            printf("Direita\n");
        }
        
        printf("\n"); // Linha em branco
        
        // BISPO - Usando WHILE (5 casas na diagonal: CIMA + DIREITA)
        printf("Movimento do Bispo (while):\n");
        int j = 0;
        while (j < 5) {
            printf("Cima, Direita\n");
            j++;
        }
        
        printf("\n"); // Linha em branco
        
        // RAINHA - Usando DO-WHILE (8 casas para ESQUERDA)
        printf("Movimento da Rainha (do-while):\n");
        int k = 0;
        do {
            printf("Esquerda\n");
            k++;
        } while (k < 8);
    }
    
    // =========================================================
    // NÍVEL 2 - AVENTUREIRO (+ Cavalo com loops aninhados)
    // =========================================================
    else if (opcao == 2) {
        printf("=== NÍVEL AVENTUREIRO ===\n\n");
        
        // TORRE
        printf("Movimento da Torre:\n");
        for (int i = 0; i < 5; i++) {
            printf("Direita\n");
        }
        
        printf("\n"); // Linha em branco
        
        // BISPO
        printf("Movimento do Bispo:\n");
        int j = 0;
        while (j < 5) {
            printf("Cima, Direita\n");
            j++;
        }
        
        printf("\n"); // Linha em branco
        
        // RAINHA
        printf("Movimento da Rainha:\n");
        int k = 0;
        do {
            printf("Esquerda\n");
            k++;
        } while (k < 8);
        
        printf("\n"); // Linha em branco
        
        // =====================================================
        // CAVALO - Movimento em "L" (2 baixo, 1 esquerda)
        // Usando loops aninhados (for + while)
        // =====================================================
        printf("Movimento do Cavalo (loops aninhados):\n");
        
        // Loop externo: controla as 2 casas para baixo (usando FOR)
        for (int baixo = 0; baixo < 2; baixo++) {
            printf("Baixo\n");
        }
        
        // Loop interno: controla 1 casa para esquerda (usando WHILE)
        int esquerda = 0;
        while (esquerda < 1) {
            printf("Esquerda\n");
            esquerda++;
        }
    }
    
    // =========================================================
    // NÍVEL 3 - MESTRE (Recursividade + Loops complexos)
    // =========================================================
    else if (opcao == 3) {
        printf("=== NÍVEL MESTRE ===\n\n");
        
        // TORRE - Versão recursiva
        printf("Movimento da Torre (recursivo):\n");
        moverTorre(5);
        
        printf("\n"); // Linha em branco
        
        // BISPO - Versão recursiva + loops aninhados
        printf("Movimento do Bispo (recursivo + loops aninhados):\n");
        moverBispo(5);
        
        printf("\n"); // Linha em branco
        
        // RAINHA - Versão recursiva
        printf("Movimento da Rainha (recursivo):\n");
        moverRainha(8);
        
        printf("\n"); // Linha em branco
        
        // CAVALO - Versão com loops complexos (múltiplas variáveis)
        printf("Movimento do Cavalo (loops complexos):\n");
        moverCavalo();
    }
    
    else {
        printf("Opção inválida!\n");
    }
    
    printf("\n==========================================\n");
    printf("           FIM DO PROGRAMA                \n");
    printf("==========================================\n");
    
    return 0;
}

// =============================================================
// FUNÇÕES RECURSIVAS (NÍVEL MESTRE)
// =============================================================

// Torre - Recursiva (movimento para DIREITA)
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); // Chamada recursiva
    }
}

// Bispo - Recursivo + loops aninhados (CIMA + DIREITA)
void moverBispo(int casas) {
    if (casas > 0) {
        // Loop externo: vertical (CIMA)
        for (int i = 0; i < 1; i++) {
            printf("Cima");
            
            // Loop interno: horizontal (DIREITA)
            for (int j = 0; j < 1; j++) {
                printf(", Direita\n");
            }
        }
        moverBispo(casas - 1); // Chamada recursiva
    }
}

// Rainha - Recursiva (movimento para ESQUERDA)
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1); // Chamada recursiva
    }
}

// Cavalo - Loops complexos com múltiplas variáveis (2 CIMA + 1 DIREITA)
void moverCavalo() {
    printf("Movimento em L (2 cima, 1 direita):\n");
    
    // Loop com múltiplas variáveis e condições complexas
    for (int passo = 0, direcao = 0; passo < 3; passo++) {
        
        if (passo < 2) {
            printf("Cima\n");
            continue; // Pula o resto da iteração
        }
        
        // Quando passo == 2, executa a direita
        printf("Direita\n");
        break; // Termina o loop após a direita
    }
    
    // Versão alternativa com loops aninhados tradicionais:
    printf("\nVersão com loops aninhados:\n");
    
    // Loop externo: 2 casas para cima
    for (int cima = 0; cima < 2; cima++) {
        printf("Cima\n");
    }
    
    // Loop interno: 1 casa para direita
    for (int direita = 0; direita < 1; direita++) {
        printf("Direita\n");
    }
}