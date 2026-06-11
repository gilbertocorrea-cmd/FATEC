//Enunciado: Escreva uma função que receba um raio (valor) e dois ponteiros
//(referência). A função deve calcular e armazenar a área (A = pi * r^2) e o perímetro
//(P = 2 * pi * r) de um círculo nos endereços apontados. Use pi = 3.14159.
#define PI 3.14159

void calcularCirculo(float raio, float *area, float *perimetro) {
    *area = (PI * raio) * raio;
    *perimetro = (2 * PI) * raio;
}
