#include <stdio.h>

int main(void) {
    int vetor[8];
    int maior, menor ,posicao_maior ,posicao_menor;
    for (int i =0 ;i<8; i++) {
        printf("Digite o numero:[%d]\n", i+1);
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];
    posicao_maior=0;
    posicao_menor=0;
    for (int i =0 ;i<8; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao_maior = i;
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
            posicao_menor = i;
        }
    }
    printf("Maior numero[%d]\n Posicao do maior no vetor:[%d]\n",posicao_maior+1,maior);
    printf("Menor numero[%d]\n Posicao do Menor no vetor:[%d]\n",posicao_menor,menor);

        return 0;
}