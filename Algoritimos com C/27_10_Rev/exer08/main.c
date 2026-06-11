#include <stdio.h>

void imprimirInvertido(char *str) {
    if (*str == '\0')
        return;
    imprimirInvertido(str + 1);

    putchar(*str);
}
int main(void) {
    char palavra[100];

    printf("Digite a palavra ou frase:\n");
    scanf("%s", &palavra);

    printf("Palavra/Frase invertida\n");
    imprimirInvertido(palavra);

    return 0;
}
