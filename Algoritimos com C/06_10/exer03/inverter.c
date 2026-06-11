#include "inverter.h"
#include <stdio.h>

void inverter(char *a){
    int tamanho;

    while (a[tamanho] != 0) {
        tamanho++;
    }
    printf("invertendo \n");

    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", a[i]);

    }

}
