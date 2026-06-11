#include <stdio.h>

int main(void) {
    int vetor [5]={0};

    for (int i=0; i<5; i++) {
        printf("Digite um numero\n");
        scanf("%d", &vetor[i]);
        if (vetor[i]<0) {
            vetor[i] = 0;
        }

    }
    for (int i=0; i<5; i++) {
        printf("%d \n", vetor[i]);

    }

    return 0;
}