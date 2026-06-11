#include <stdio.h>

int main(void) {
    double salario, novoSalario;
    printf("informe o salario atual: \n");
    scanf("%lf", &salario);
    /*
    if (salario <= 2000) {
        novoSalario = salario * 1.11;
    } else {
        novoSalario = salario * 1.10;
    }
*/
    salario *= salario <= 2000 ? 1.11 : 1.10; /* if ternario o * esta multiplicando direto  ( ? entao)  ( : senao ) */
    printf("Novo salario: %2lf \n", novoSalario);
    return 0;
}
