/*#include <stdio.h>

int main(void) {
int numeroOriginal,numeroInvertido =0,digito;
    printf("Digite o numero  para Decodificar\n");
    scanf("%d",&numeroOriginal);
    if (numeroOriginal<=0) {
        printf("Digite um numero interiro e positivo");
    }
    for (; numeroOriginal>0;numeroOriginal /=10) {
        digito = numeroOriginal % 10;
        numeroInvertido = numeroInvertido * 10 + digito;
    }
    printf("O numero decodificado e:%d",numeroInvertido);

    return 0;
}*/

//// primeiro passo ele vai pegar 0 * 10 + 5 = 5
/// segundo passo ele vai pertar 5 * 10 + 4 = 54
/// terceiro passo ele vai pergar 54 * 10 + 3 = 543

#include <stdio.h>

int main(void) {
    int numeroOriginal,numeroInvertido =0,digito;

    printf("Digite o numero  para Decodificar\n");
    scanf("%d",&numeroOriginal);

    if (numeroOriginal<=0) {
        printf("Digite um numero interiro e positivo");
    }

    while (numeroOriginal>0) {
        digito = numeroOriginal % 10;
        numeroInvertido = numeroInvertido * 10 + digito;
        numeroOriginal = numeroOriginal  / 10;
    }

printf("O numero decodificado e:%d",numeroInvertido);

return 0;
}