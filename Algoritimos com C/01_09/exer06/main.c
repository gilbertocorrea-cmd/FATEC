#include <stdio.h>

int main(void) {
    int linha;
    printf("Digite o numero de linhas da piramide\n");
    scanf("%d",&linha);
    if (linha<=0){
        printf("Digite um numero positivo e interiro");
    }

    for (int i=1;i<=linha;i++) {
        for (int j=1;j<=i;j++) {
            printf(" %d", i);
        }
        printf("\n");
    }
    return 0;
}