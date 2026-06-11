#include <stdio.h>

int somaDigitos(int n) {

    if (n ==0) {
        return 0;
    }else{
        return  (n % 10 ) + somaDigitos( n / 10);
    }

    }
int main(void) {
int n = 123;
    printf("%d\n",somaDigitos(n));
    return 0;
}


