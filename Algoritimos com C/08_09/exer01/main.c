#include <stdio.h>

int main(void) {
    int soma =0;
    int vetor [10];
    for (int i =0 ;i <10 ;i++) {
        printf("Digite um numero[%d]:",i+1);
        scanf("%d", &vetor[i]);
    }
    for (int i =0 ;i<10 ;i++) {
        soma += vetor[i];
    }
    printf("a soma dos numeros inseridos e:[%d]",soma);
    return 0;
}