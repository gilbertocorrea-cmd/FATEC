#include <stdio.h>
#include "fibonacci.h"

int main(void) {
    int n = 0;
    printf("Digite o valor de N\n");
    scanf("%d", &n);

    printf("o [%d]-esimo termo da sequencia de Fibonacci e: [%d]",n ,fibonacci(n));
    return 0;
}
