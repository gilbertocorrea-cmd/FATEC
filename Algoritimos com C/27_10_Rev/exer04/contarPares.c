#include "contarPares.h"

int contarPares(int array[], int tamanho, int *par, int *impar) {
    for (int i = 0; i < tamanho; i++) {
        if (array[i] % 2 == 0) {
            (*par)++;
        }else {
            (*impar)++;
        }
    }
}
