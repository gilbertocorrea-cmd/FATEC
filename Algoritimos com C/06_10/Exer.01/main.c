#include <stdio.h>
#include "adicao.h" // INCLUE O CABEÇALHO DA ADIÇÃO.H
#include "subtracao.h"// INCLUE O CABEÇALHO DA SUBTRAÇÃO.H
#include "divisao.h" // INCLUE O CABEÇALHO DA DIVISAO
#include "multiplicacao.h" // INCLUE O CABEÇALHO DA MULTIPLICAÇÃO


int exibirMenu() {
    // FUNÇÃO DO MENU QUE APARECE PARA O USUARIOO
    int opcao;
    printf("\nCalculadora DO GIL\n");
    printf("1 - adicao\n");
    printf("2 - subtracao\n");
    printf("3 - divisao\n");
    printf("4 - multiplicacao\n");
    printf("0 - sair\n");
    printf("Escolha uma das opcoes\n");
    scanf("%d", &opcao);
    return opcao;
}

int main(void) {
    // FUNÇÃO PRINCIPAL QUE ESTA FAZENDO O ROLE
    float n1, n2, r;
    int opcao;
    do {
        opcao = exibirMenu();

        if (opcao == 1) {
            printf("Digite o primeiro numero: \n");
            scanf("%f", &n1);
            printf("Digite o segundo numero: \n");
            scanf("%f", &n2);
            adicao(&n1, &n2, &r); // CHAMANDO A FUNÇÃO IMPLEMENTADA EM OUTRO ARQUIVO
            printf("resultado = [%.2f] \n", r);
        } else if (opcao == 2) {
            printf("Digite o primeiro numero:\n");
            scanf("%f", &n1);
            printf("Digite o segundo numero: \n");
            scanf("%f", &n2);
            subtracao(&n1, &n2, &r); // CHAMANDO A FUNÇÃO IMPLEMENTADA EM OUTRO ARQUIVO
            printf("resultado = [%.2f]\n", r);
        } else if (opcao == 3) {
            printf("Digite o primeiro numero:\n");
            scanf("%f", &n1);
            printf("Digite o segundo numero: \n");
            scanf("%f", &n2);
            divisao(&n1, &n2, &r); // CHAMANDO A FUNÇÃO IMPLEMENTADA EM OUTRO ARQUIVO
            printf("resultado = [%.2f]\n", r);
        } else if (opcao == 4) {
            printf("Digite o primeiro numero:\n");
            scanf("%f", &n1);
            printf("Digite o segundo numero: \n");
            scanf("%f", &n2);
            multiplicacao(&n1, &n2, &r); // CHAMANDO A FUNÇÃO IMPLEMENTADA EM OUTRO ARQUIVO
            printf("resultado = [%.2f]\n", r);
        } else if (opcao != 0) {
            printf("opção invalida\n");
        }
    } while (opcao != 0);
    printf("Saindo bye bye gay\n");
    return 0;
}
