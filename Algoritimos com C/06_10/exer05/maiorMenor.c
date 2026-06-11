#include "maiorMenor.h"
#include <stdio.h>
#define V 3

int maiorMenor(int vetor[], int *maior, int *menor) {
    for (int i = 0; i < V; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        } else if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}
