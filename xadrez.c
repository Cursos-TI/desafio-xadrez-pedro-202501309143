#include <stdio.h>
#include <string.h>

// Função para mover a Torre usando for
void moverTorre() {
    printf("--- Movimento da Torre ---\n");
    
    // Movendo 5 casas para a direita usando for
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");
}

// Função para mover o Bispo usando while
void moverBispo() {
    printf("--- Movimento do Bispo ---\n");
    
    // Movendo 5 casas na diagonal usando while
    int i = 1;
    while (i <= 5) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");
}

// Função para mover a Rainha usando do-while
void moverRainha() {
    printf("--- Movimento da Rainha ---\n");
    
    // Movendo 8 casas para a esquerda usando do-while
    int i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);
    printf("\n");
}

int main() {
    // Cabeçalho do programa
    printf("Simulador de Movimentos de Peças de Xadrez\n");
    printf("==========================================\n\n");
    
    // Chamando as funções de movimento para cada peça
    moverTorre();
    moverBispo();
    moverRainha();
    
    return 0;
}