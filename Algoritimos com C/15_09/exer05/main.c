#include <stdio.h>

int main(void) {
    int matriz[2][2] = {0};
    int numero = 0;
    printf("Digite O numero multiplicador\n");
    scanf("%d", &numero);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o numero que sera multiplicado\n");
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] != 0) {
                matriz[i][j] = matriz[i][j] * numero;
            }
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\n", matriz[i][j]);
        }
    }
    return 0;
}
