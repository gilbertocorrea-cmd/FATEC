#include "inverte.h"
#include <stdio.h>

void inverte(char *a) {
    int tamanho=0;

    while (a[tamanho] != 0) {
        tamanho++;
    }
    printf("strig convertida para INTEIRO [%d] \n", tamanho);
}
