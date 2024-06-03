#include <stdio.h>

int main() {
    int suma = 0;
    long long producto = 1; // Usamos long long para evitar desbordamiento

    for (int i = 20; i <= 400; i++) {
        suma += i;
        producto *= i;
    }

    printf("La suma de los números entre 20 y 400 es: %d\n", suma);
    printf("El producto de los números entre 20 y 400 es: %lld\n", producto);

    return 0;
}