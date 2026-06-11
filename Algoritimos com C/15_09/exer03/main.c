#include <stdio.h>

int main(void) {
    int matriz[3][3] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite os valores:\n");
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i=0; i<3;i++) {
        for (int j=0;j<3;j++) {
            printf("Matriz original:[%d]\n",matriz[i][j]);
        }
    }
    for (int i=0; i<3;i++) {
        for (int j=0;j<3;j++) {
            printf("Matriz transposta:[%d]\n",matriz[j][i]);
        }
    }


    return 0;
}
