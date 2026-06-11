#include <stdio.h>

int main(void) {
    int n;

    printf("Qual posicao do termo voce deseja?\n");
    scanf("%d",&n);
    if (n==1) {
        printf("O primeiro termo do tribonacci 0\n");
    }else if (n==2) {
        printf("o segundo termo tribonacci 1\n");
    }else if (n==3){
        printf("O terceiro termo tribonacci 1\n");
    }else if (n<1) {
        printf("DIGITE UM NUMERO INTEIRO POSITIVO");

    }else {
        long long termoA=0;
        long long termoB=1;
        long long termoC=1;
        long long termoSeguinte;

        for (int i=4;i<=n;i++) {
            termoSeguinte = termoA + termoB + termoC;

            termoA = termoB;
            termoB = termoC;
            termoC = termoSeguinte;
        }
        printf("O %d  termo de tribonacci e:%lld" , n, termoC);
    }
    return 0;
}