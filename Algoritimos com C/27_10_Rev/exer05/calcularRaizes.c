//
// Created by 73574 on 29/10/2025.
//
#include "calcularRaizes.h"
#include <math.h>

int calcularRaizes(float a, float b, float c, float *x1, float *x2) {
    float delta = (b * b) - (4 * a * c);
    if (delta < 0) {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 0;
    } else if (delta == 0) {
        *x1 = -b / (2 * a);
        return 1;
    } else {
        return 0;
    }
}
