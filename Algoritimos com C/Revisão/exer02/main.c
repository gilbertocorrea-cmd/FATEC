#include <stdio.h>
#define T 10

int main(void) {
    int vetor[T] = {0};
    int menor = 0, maior = 0;
    for (int i = 0; i < T; i++) {
        printf("Digite o valor[%d]: \n", i + 1);
        scanf("%d", &vetor[i]);
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    printf("O maior numero inserido foi: [%d] e o menor numero inserido foi: [%d]\n",maior,menor);
    return 0;
}
