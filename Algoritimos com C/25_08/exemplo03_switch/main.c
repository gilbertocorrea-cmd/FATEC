#include <stdio.h>

int main(void) {
    int opcao;
    printf("Cardapio:\n");
    printf("Pizza Portuguesa\n");
    printf("Pizza Calabresa\n");
    printf("Pizza Carbonara\n");
    printf("Pizza de Abobrinha\n");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            printf("Valor R$ 86,90\n");
            break;
        case 2:
            printf("Valor R$ 99,90\n");
            break;
        case 3:
            printf("Valor R$ 90,90\n");
            break;
        case 4:
            printf("Valor R$ 89,90\n");
            break;
        default:
            printf("Opcao invalida\n");
    }
    return 0;
}
