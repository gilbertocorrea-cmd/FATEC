#include <stdio.h>
#include "calcularCirculo.h"

int main(void) {
    float raio, area, perimetro;
    printf("Digite o valor do Raio\n");
    scanf("%f", &raio);
    calcularCirculo(raio, &area, &perimetro);

    printf("De acordo com o Raio [%.2f]\n",raio);
    printf("A AREA do local e de [%.2f] \n",area);
    printf("E o PERIMETRO e de [%.2f]\n",perimetro);

    return 0;
}
