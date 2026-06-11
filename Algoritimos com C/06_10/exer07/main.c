#include <stdio.h>
#include "inverte.h"

int main(void) {
    char a[99];
    printf("Digite uma palavra \n");
    scanf("%98s",a);
    inverte(a);

    return 0;
}