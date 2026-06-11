#include <stdio.h>
#define L 6

int main(void) {
    int n1[L] = {0};
    int soma = 0;
    //For para receber as entradas validar e fazer a soma
    for (int i = 0; i < L; i++) {
        printf("Digite o valor\n");
        scanf("%d", &n1[i]);
        //validação
        if (i == 0) {
            soma +=  n1[i]; //soma
            //validação
        } else if (i == 2) {
            soma +=  n1[i]; //soma
            //validação
        } else if (i == 4) {
            soma +=  n1[i]; //soma
        }
    }
    printf("Soma dos vetores [0][2][4] inseridos: [%d]\n", soma); // Print soma
    // for para exibir os numero inseridos
    printf("Valores inseridos:");
    for (int i = 0; i < L; i++) {
        printf("[%d]", n1[i]);
    }
    return 0;
}
