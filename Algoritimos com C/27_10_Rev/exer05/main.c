#include <stdio.h>
#include "calcularRaizes.h"

int main(void) {
    float a, b, c, *x1, *x2;
    int resultado;
    printf("Digite o valor de \"A\":\n");
    scanf("%d", &a);

    printf("Digite o valor de \"B\":\n");
    scanf("%d", &b);

    printf("Digite o valor de \"C\":\n");
    scanf("%d", &c);

    resultado = calcularRaizes(a,b,c,&x1,&x2);

    if (resultado == 2) {
        printf("Duas raizes reais \"X1\" [%.2f] \"X2\" [%.2f] ",x1,x2);
    }else if (resultado == 1) {
        printf("Uma raiz real\"X1\"[%.2f]",x1);
    }else {
        printf("Nenhuma raiz real");
    }

    return 0;
}
