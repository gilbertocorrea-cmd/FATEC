#include <stdio.h>
#define Tamanho 5
#include "encontrarMinMax.h"

int main(void) {
    int array[Tamanho];
    int min, max;
    for (int i = 0; i < Tamanho; i++) {
        printf("Digite um numero[%d] \n", i + 1);
        scanf("%d", &array[i]);
    }
    encontrarMinMax(array,Tamanho, &min, &max);
    printf("O Maior numero digitado foi: [%d] \n", max);
    printf("O Menor numero digitado foi: [%d] \n", min);
    return 0;
}
