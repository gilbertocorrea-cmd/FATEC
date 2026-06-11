#include <stdio.h>
#include "transpor.h"
#define L 3
#define C 3

int transpor(int matriz[L][C], int matrizTransposta[C][L]) {

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {

            matrizTransposta[j][i] = matriz[i][j];
        }

    }
}
