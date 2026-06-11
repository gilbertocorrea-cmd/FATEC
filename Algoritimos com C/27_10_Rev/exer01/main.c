#include <stdio.h>
#include "trocar.h"

int main(void) {
    int a;
    int b;
    printf("Digite o valor de A\n");
    scanf("%d", &a);
    printf("Digite o valor de B\n");
    scanf("%d", &b);
    trocar(&a, &b);
    printf("valores trocados: A [%d] B [%d]", a, b);

    return 0;
}
