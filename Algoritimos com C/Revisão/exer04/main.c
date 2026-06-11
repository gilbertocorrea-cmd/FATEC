#include <stdio.h>
#define L 5
#define C 10

int main(void) {
    char respostaAlunos[L][C] = {{0}};
    int pontuacao[L] = {0};
    char gabarito[C] = {'a', 'b', 'c', 'd', 'a', 'b', 'c', 'd', 'a', 'b'};

    // For para salvar nas LINHAS
    for (int i = 0; i < L; i++) {
        // For para salvar nas COLUNAS
        for (int j = 0; j < C; j++) {
            // do while para validação de entrada.
            do {
                printf("Digite a resposta[%d] do aluno[%d]:\n", j + 1, i + 1);
                scanf(" %c", &respostaAlunos[i][j]);

                if (respostaAlunos[i][j] != 'a' && // if para mensagem de validação de entrada
                    respostaAlunos[i][j] != 'b' &&
                    respostaAlunos[i][j] != 'c' &&
                    respostaAlunos[i][j] != 'd') {
                    printf("Entrada invalida. So e valido apenas:  [a] [b] [c] [d] \n");
                }
            } while (respostaAlunos[i][j] != 'a' && // while para validação de entrada.
                     respostaAlunos[i][j] != 'b' &&
                     respostaAlunos[i][j] != 'c' &&
                     respostaAlunos[i][j] != 'd');
        }
    } // for para percorrer as linhas da matriz;
    for (int i = 0; i < L; i++) {
        // for para percorrer as colunas da matriz;
        for (int j = 0; j < C; j++) {
            if (respostaAlunos[i][j] == gabarito[j]) {
                pontuacao[i] = pontuacao[i] + 1;
            }
        }
    } //for para fazer a impressão da pontução dos alunos
    for (int i = 0; i < L; i++) {
        printf("o Aluno[%d] tirou[%d]\n", i + 1, pontuacao[i]);
    }
    return 0;
}
