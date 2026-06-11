#include <stdio.h>
#include "grausFahrenheit.h"
#include "fahrenheitGraus.h"

int exibirMenu() {
    int opcao;
    printf("\n Converta Temperaturas:\n");
    printf("1- Graus para fahrenheit:\n");
    printf("2- Fahrenheit para Graus: \n");
    printf("0- Sair \n");
    printf("Escolha uma das Opcoes: \n");
    scanf("%d", &opcao);
    return opcao;
}

int main(void) {
    float n1 = 0, n2 = 1.8, r;
    int opcao;
    do {
        opcao = exibirMenu();
        if (opcao == 1) {
            printf("Digite a temperatura em GRAUS: \n");
            scanf("%f", &n1);
            grausFahenheit(&n1, &n2, &r);
            printf("fahrenheit: [%.2f]", r + 32);
        }else if (opcao ==2 ) {
            printf("Digite a temperatura em Fahrenheit: \n");
            scanf("%f", &n1);
            fahrenheitGraus(&n1, &n2, &r);
            printf("GRAUS: [%.2f]", r);
        }
    } while (opcao != 0);
    printf("Saindo,Obrigado");
    return 0;
}
