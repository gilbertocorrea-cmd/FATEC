#include <stdio.h>

int main(void) {
    int n;

    printf("Qual posicao do termo voce deseja?\n");
    scanf("%d",&n);
    int termoA = 0;
    int termoB = 1;
    int termoC = 1;
    int termoSeguinte;

        for (int i=4;i<=n;i++) {

            termoSeguinte = termoA + termoB + termoC;

            termoA = termoB;
            termoB = termoC;
            termoC = termoSeguinte;
        }
        printf("O termo de tribonacci e:%d" , termoC);
    return 0;
}