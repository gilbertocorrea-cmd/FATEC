#include <stdio.h>
#include "maiorMenor.h"
#define V 3

int main(void) {
    int vetor[V] = {0};
    int menor, maior = 0;

    for (int i = 0; i < V; i++) {
        printf("Digite o numero\n");
        scanf("%d", &vetor[i]);

    }
    maiorMenor( vetor,&maior,&menor);
printf("Maior [%d], Menor[%d]", maior, menor);
    return 0;
}
