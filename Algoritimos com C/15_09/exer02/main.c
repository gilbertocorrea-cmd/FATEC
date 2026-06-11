#include <stdio.h>

int main(void) {
    int matriz[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Insira os valores \n");
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 4; i++) {
        printf("[%d] \n", matriz[i][i]);
    }

    return 0;
}
