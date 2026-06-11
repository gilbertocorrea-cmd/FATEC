#include <stdio.h>
#define L 3

int main(void) {
    int vetor1[L] = {0};
    int vetor2[L] = {0};
    int vetor3[L] = {0};
    for (int i = 0; i < L; i++) {
        printf("Digite o valor[%d] do primeiro vetor\n", i + 1);
        scanf("%d", &vetor1[i]);
    }
    for (int i = 0; i < L; i++) {
        printf("Digite o valor [%d] do segundo vetor\n", i + 1);
        scanf("%d", &vetor2[i]);
        if (vetor1[i] == vetor2[i]) {
            vetor3[i] = vetor2[i];
        }
    }
    for (int i = 0; i < L; i++) {
        printf("Interseccao [%d] \n", vetor3[i]);
    }
    return 0;
}
