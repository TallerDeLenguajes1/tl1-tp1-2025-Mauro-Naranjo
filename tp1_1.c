#include <stdio.h>

int main () {
    printf("hola mundo\n");

    int numero = 8;
    int *puntero = &numero;
    
    printf("Contenido del puntero es: %d\n", *puntero);
    printf("La direccion de memoria almacenada por el puntero es: %d\n", puntero);
    printf("La direccion de memoria de la variable: %d\n", &numero);
    printf("La direccion de memoria del puntero: %d\n", &puntero);
    printf("El tamaño de memoria de la variable: %d\n", sizeof(numero));
    
    return 0;
}