#include <stdio.h>

int main(void) {
    printf("texto \"destacado\"\n ");
    printf("\\n pular uma linha \n");
    printf("desconto de 5%% \n");
    char letra = 'A';
    char outra = 97;
    printf("%c \n", letra);
    printf("%c \n", outra);
    for (int i=0;i<=255;i++) {
        printf("%d = %c \n",i,i);
    }

    return 0;
}
