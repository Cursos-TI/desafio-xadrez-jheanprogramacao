#include <stdio.h>

// Movimentos da Torre
void moverTorre(int moviT) {
    if (moviT > 0){
       printf("Direita\n"); 
       moverTorre(moviT - 1);
    }
}

// Movimentos da Rainha
void moverRainha(int moviR) {
    if (moviR > 0){
       printf("Esquerda\n"); 
       moverRainha(moviR - 1);
    }
}

// Movimentos do bispo
void moverBispo(int n) {
    if (n > 0) {
        for (int i = 0; i < 1; i++) { // vertical
            for (int j = 0; j < 1; j++) { // horizontal
                printf("Cima, Direita\n");
            }
        }
        moverBispo(n - 1); 
    }
}

int main() {
    // Chamada para a Torre
    printf("\nMovimento da Torre:\n");
    moverTorre(5);

    // Linha em branco entre as peças
    printf("\n");

    // Bispo com while
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // Linha em branco entre as peças
    printf("\n");

    // Chamada para a Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Linha em branco entre as peças
    printf("\n");

    // Cavalo com estrutura aninhada
    printf("\nMovimento do Cavalo:\n");
    int l = 0;
    while (l < 1) {
        int mov = 1;
        for (int m = 0; m < 2; m++) {
            printf("Baixo\n");
        }

        printf("Esquerda\n");

        l++;
    }

    return 0;
}
