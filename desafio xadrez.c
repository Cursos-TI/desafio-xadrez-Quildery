#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas, int atual) {
    if (casas <= 0) {
        printf("Erro: Número de casas da Torre deve ser positivo.\n");
        return;
    }
    if (atual > casas) {
        return;
    }
    printf("Direita\n");
    moverTorre(casas, atual + 1);
}

// Função recursiva para o movimento do Bispo com loops aninhados
void moverBispo(int casas, int atual) {
    if (casas <= 0) {
        printf("Erro: Número de casas do Bispo deve ser positivo.\n");
        return;
    }
    if (atual > casas) {
        return;
    }
    // Loop externo para movimento vertical (Cima)
    for (int i = 1; i <= 1; i++) {
        // Loop interno para movimento horizontal (Direita)
        for (int j = 1; j <= 1; j++) {
            printf("Cima, Direita\n");
        }
    }
    moverBispo(casas, atual + 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas, int atual) {
    if (casas <= 0) {
        printf("Erro: Número de casas da Rainha deve ser positivo.\n");
        return;
    }
    if (atual > casas) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(casas, atual + 1);
}

int main() {
    // Movimento da Torre
    int torre_casas = 5;
    printf("Movimento da Torre:\n");
    moverTorre(torre_casas, 1);

    // Movimento do Bispo
    int bispo_casas = 5;
    printf("\nMovimento do Bispo:\n");
    moverBispo(bispo_casas, 1);

    // Movimento da Rainha
    int rainha_casas = 5;
    printf("\nMovimento da Rainha:\n");
    moverRainha(rainha_casas, 1);

    // Movimento do Cavalo
    int cavalo_cima = 2;
    int cavalo_direita = 1;
    printf("\nMovimento do Cavalo:\n");
    if (cavalo_cima <= 0) {
        printf("Erro: Número de casas para cima do Cavalo deve ser positivo.\n");
    } else if (cavalo_direita <= 0) {
        printf("Erro: Número de casas para a direita do Cavalo deve ser positivo.\n");
    } else {
        int contador_cima = 0;
        for (int m = 1; m <= cavalo_cima + cavalo_direita; m++) {
            if (contador_cima < cavalo_cima) {
                printf("Cima\n");
                contador_cima++;
                continue;
            }
            int n = 1;
            while (n <= cavalo_direita) {
                printf("Direita\n");
                n++;
                break;
            }
            if (n > cavalo_direita) {
                break;
            }
        }
    }

    return 0;
}

