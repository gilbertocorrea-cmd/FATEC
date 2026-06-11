#include <stdio.h>

int main(void) {
    int vetor [5];
    int par,impar;
    for (int i=0;i<5;i++) {
        printf("Digite o [%d] numero \n");
        scanf("%d", &vetor[i]);
        if (vetor[i] %2 ==0) {
        par += 1;
        }else {
            impar += 1;
        }
        printf("Voce digitou[%d] numeros impar e [%d] numeros par ", impar, par);
    }

    return 0;
}