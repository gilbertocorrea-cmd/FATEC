#include <stdio.h>
#include "contarPares.h"


int main(void) {
    int tamanho;

    printf("Digite o tamanho da array\n");
    scanf("%d", &tamanho);

    int array[tamanho];
    int par = 0, impar = 0;

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o numero [%d]\n", i + 1);
        scanf("%d", &array[i]);
    }
    contarPares(array, tamanho, &par, &impar);

    printf("O tamanho da array foi de [%d]: \n",tamanho);

    printf("Os numero inseridos foram:");
    for (int i = 0; i < tamanho; i++) {
        printf("[%d]", array[i]);
    }
    printf("\nForam inseridos [%d]: Numeros Pares \n",par);
    printf("Foram inseridos [%d]: Numeros Impares\n",impar);
    return 0;
}
