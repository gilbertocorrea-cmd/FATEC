#include <stdio.h>

int main(void) {

    int vetor[15] = {0};
    for (int i=0 ;i<15 ;i++) {
        printf("Digite o [%d] numero:\n", i+1);
        scanf("%d", &vetor[i]);
       }
    for (int i=14 ;i>=0 ;i--) {
        printf("[%d]",vetor[i]);
    }
    return 0;
}