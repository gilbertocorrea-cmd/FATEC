#include <inttypes.h>
#include <stdio.h>

////estrutura para cadastro de empregados
struct Empregado {
    int matricula;
    char nomeF[99];
    char enderecoF[99];
    double salario;
    char cargaHoraria[99];
};

//// estrutura de cadastro de clientes
struct Cliente {
    int comanda;
    char nomeC[99];
    char enderecoC[99];
    float conta;
};

void limparBuffer();
////FUNÇÃO P/ LIMPAR BUFFER
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

//// função para chamar as estrutura de ***LEITURA*** de EMPREGADOS
void lerEmpregado(struct Empregado *empregado);

//// FUNÇÃO ***LEITURA*** de EMPREGADOS:
void lerEmpregado(struct Empregado *empregado) {
    printf("Matricula do Funcionario\n");
    scanf("%d", &empregado->matricula);
    limparBuffer();
    printf("Nome do Funcionario\n");
    fgets(empregado->nomeF, 99,stdin);

    printf("Endereco do Funcionario\n");
    fgets(empregado->enderecoF, 99,stdin);

    printf("Salario do Funcionario\n");
    scanf("%lf", &empregado->salario);
    limparBuffer();
    printf("Carga horaria do Funcionario\n");
    fgets(empregado->cargaHoraria, 99,stdin);
}


//// função para chamar as estrutura de ***LEITURA*** de CLIENTES
void lerCliente(struct Cliente *cliente);

////FUNÇÃO ***LEITURA*** de CLIENTES:
void lerCliente(struct Cliente *cliente) {
    printf("Comanda do Cliente\n");
    scanf("%d", &cliente->comanda);
    limparBuffer();
    printf("Nome do Cliente\n");
    fgets(cliente->nomeC, 99,stdin);

    printf("Endereco do Cliente\n");
    fgets(cliente->enderecoC, 99,stdin);

    printf("Valor do pedido\n");
    scanf("%f", &cliente->conta);
    limparBuffer();
}


////FUNÇÃO PARA CHAMAR A ESTRUTURA DE ***IMPRIMIR*** EMPREGADOS
void imprimirEmpregado(struct Empregado empregado);

////FUNÇÃO ***IMPRIMIR*** EMPREGADOS
void imprimirEmpregado(struct Empregado empregado) {
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\nCADASTRO DE FUNCIONARIOS\n");
    printf("\nMatricula:%d\n", empregado.matricula);
    printf("\nNome:%s\n", empregado.nomeF);
    printf("Endereco:%s\n", empregado.enderecoF);
    printf("Salario:%.2lf\n", empregado.salario);
    printf("\nCarga Horaria:%s\n", empregado.cargaHoraria);
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}

//// FUNÇÃO PARA CHAMAR A ESTRUTURA DE ***IMPRIMIR*** CLIENTES
void imprimirClientes(struct Cliente cliente);

//// FUNÇÃO ***IMPRIMIR*** CLIENTES
void imprimirClientes(struct Cliente cliente) {
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\nCadastro de Clientes\n");
    printf("\nComanda:%d\n", cliente.comanda);
    printf("\nNome:%s\n", cliente.nomeC);
    printf("Endereco:%s\n", cliente.enderecoC);
    printf("Conta:R$ %.2f\n", cliente.conta);
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}

int main(void) {
    int op = 0;
    struct Empregado empregado;
    struct Cliente cliente;
    do {
        printf("\n=========== Menu ===========\n");
        ////MENU DE CADASTRO.
        printf("\n==Selecione a opcao desejada==\n");
        printf("\n[1] Cadastro de FUNCIONARIOS\n");
        printf("[2] Cadastro de CLIENTES\n");

        printf("\n========== IMPRESSAO ==========\n");

        ////MENU DE IMPRESSAO
        printf("\n[3] Impressao  de FUNCIONARIOS\n");
        printf("[4] Impressao de CLIENTES\n");
        printf("\n[9] ==== SAIR ====\n");
        scanf("%d", &op);

        switch (op) {
            case 1:
                lerEmpregado(&empregado);

                break;
            case 2:
                lerCliente(&cliente);
                break;
            case 3:
                imprimirEmpregado(empregado);
                break;
            case 4:
                imprimirClientes(cliente);
                break;
        }
    } while (op != 9);


    return 0;
}
