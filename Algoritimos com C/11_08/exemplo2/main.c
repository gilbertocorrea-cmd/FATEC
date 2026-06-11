#include <stdio.h>

int imprimir(int valor);

int valor = 15;

int main(void) {
    //variavel dentro da função
    printf("valor = %d \n", valor);
    printf("local da memoria: %d \n", &valor);
    int valor = 10;
    printf("local da memoria: %d \n", &valor);
    imprimir(valor);
    printf("valor = %d \n",valor);
    return 0;
}
int imprimir (int valor) {
    valor = valor + 1;
    printf("valor = %d \n", valor);
    printf("local da memoria: %d \n", &valor);
}