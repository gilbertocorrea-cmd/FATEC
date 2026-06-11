#include <stdio.h>

int main(void) {
    int matrizA[3][3] = {0};
    int matrizB[3][3] = {0};
    int soma[3][3] = {0};
    printf("Leitura dos vetores das matrizes\n");
    // Leitura da primeira matriz
    for (int i = 0; i < 3; i++) {
        // leitura das linhas da matriz
        for (int j = 0; j < 3; j++) {
            // leitura das culunas da matriz
            printf("Insira o valor da primeira sequencia\n ");
            scanf("%d", &matrizA[i][j]);
        }
    }
    // Leitura da segunda matriz
    for (int i = 0; i < 3; i++) {
        // Leitura das linhas da matriz
        for (int j = 0; j < 3; j++) {
            // Leitura das colunas da matriz
            printf("insira o valor da segunda sequencia\n ");
            scanf("%d", &matrizB[i][j]);
        }
    }
    //Soma dos valores
    for (int i = 0; i < 3; i++) {
        // percorre as linhas da matriz
        for (int j = 0; j < 3; j++) {
            //Percorre as colunas da matriz
            soma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%d]", soma[i][j]);
        }
    }

    return 0;
}
