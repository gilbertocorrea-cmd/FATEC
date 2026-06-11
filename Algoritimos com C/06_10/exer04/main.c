#include <stdio.h>
#include "transpor.h"
#define L  3
#define C  3

int main(void) {
    int matriz[L][C] = {{0}};
    int matrizTransposta[C][L] = {{0}};

    //For para receber os dados da matriz
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("Digite os valores da Matriz LINHA:[%d]Coluna[%d]\n ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    //for para apresentar a matriz original
    printf("Matriz Original\n");
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("LINHA:[%d]Coluna[%d]Valor:[%d]\n ", i + 1, j + 1, matriz[i][j]);
        }
    }
    //usando a função de transpor
    transpor(matriz, matrizTransposta);
    //for da matriz transposta
    printf("Matriz transposta\n");
    for (int i = 0; i < C; i++) {
        for (int j = 0; j < L; j++) {
            printf("LINHA:[%d]Coluna[%d]Valor:[%d]\n ", i + 1, j + 1, matrizTransposta[i][j]);
        }
    }
    return 0;
}
