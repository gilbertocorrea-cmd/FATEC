//
// Created by 73574 on 28/10/2025.
//
#include "encontrarMinMax.h"
void encontrarMinMax(int array[], int tamanho, int *min, int *max) {
    *min = array[0];
    *max = array[0];
    for (int i = 0; i < tamanho; i++) {
        if (array[i] < *min) {
            *min = array[i];
        }
        if (array[i] > *max) {
            *max = array[i];
        }
    }
}
