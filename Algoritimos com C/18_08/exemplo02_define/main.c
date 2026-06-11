#include <stdio.h>
#define pi 3.14159265 //constante definida PI
int main(void) {
    double raio, area,perimetro;
    printf("Digite o valor do RAIO \n");
    scanf("%lf",& raio);
    area = (raio * raio) * pi;
    perimetro = 2 * area;
    printf("valor da area: %5lf \n", area);
    printf("valor do perimetro: %5lf \n",perimetro);
    return 0;
}