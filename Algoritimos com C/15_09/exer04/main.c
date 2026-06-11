#include <stdio.h>

int main(void) {
    int matriz[5][5] = {0};
    int poseLinha = 0;
    int poseColuna = 0;
    int maior = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite o numero\n");
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                poseLinha = i;
                poseColuna = j;
            }
        }
    }
    printf("O maior numero inserido foi[%d]\nEle esta na Alocado na linha:[%d]\n E na coluna[%d]", maior,poseLinha,poseColuna);
    return 0;
}
