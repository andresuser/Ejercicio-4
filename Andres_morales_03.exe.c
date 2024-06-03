#include <stdio.h>

int main() {
    int numero;
    int mayor = 0;

    do {
        printf("Ingresa un número positivo distinto de cero (-99 para salir): ");
        scanf("%d", &numero);

        if (numero > mayor && numero != -99) {
            mayor = numero;
        }
    } while (numero != -99);

    printf("El número mayor de la serie es: %d\n", mayor);

    return 0;
}