#include <stdio.h>

int main() {
    // Torre com for
    for (int i = 1; i < 5; i++) {
        printf("Movimento %d: Direita\n", i);
    }

    // Linha em branco entre as peças
    printf("\n");

    // Bispo com while
    int j = 1;
    while (j < 5) {
        printf("Movimento %d: Cima, Direita\n", j);
        j++;
    }

    // Linha em branco entre as peças
    printf("\n");

    // Rainha com do-while
    int k = 1;
    do {
        printf("Movimento %d: Esquerda\n", k);
        k++;
    } while (k < 8);

    return 0;
}
