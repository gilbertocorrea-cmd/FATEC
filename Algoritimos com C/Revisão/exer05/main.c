#include <stdio.h>
#define L 3
#define C 3

int main(void) {
    int matriz[L][C] = {{0}};
    int vetor[L] = {0};
    //for para entrada de dados
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("Insira o numero: \n");
            scanf("%d", &matriz[i][j]);
        }
    }
    //for para calcular
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            if (i == L);
            vetor[i] = vetor[i] + matriz[i][j];
        }
    }
    //for para printar na tela
for (int i=0;i<L;i++) {
    printf("A Soma de cada coluna é de[%d]\n ", vetor[i]);
}

    return 0;
}
