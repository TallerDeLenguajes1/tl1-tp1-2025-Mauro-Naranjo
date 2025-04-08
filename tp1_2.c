#include <stdio.h>

int cuadrado (int numero);
void cuadradoVoid (int numero);
void direccionContenido (int *numero);
void invertir (int *a,int *b);
void orden (int *a,int *b);

int main () {
    int a,b;
    
    fflush(stdin);
    printf("Ingrese un numero entero:\n");
    scanf("%d", &a);
    printf("Ingrese otro numero entero:\n");
    scanf("%d", &b);
    
    int total = cuadrado(a);
    printf("El cuadrado de %d es: %d\n", a, total);
    
    direccionContenido(&a);
    
    printf("El valor de a es: %d y de b es: %d\n", a, b);
    invertir(&a, &b);
    printf("Luego de invertirlos el valor de a es:%d y el de b es: %d\n", a, b);
    
    orden(&a, &b);
    printf("El valor de a(menor) es: %d y de b(mayor) es: %d\n", a, b);
    
    return 0;
}

int cuadrado (int numero) {
    return numero*numero;
}

void cuadradoVoid (int numero) {
    numero = numero*numero;
    printf("el cuadrado es %d", numero);
}

void direccionContenido (int *numero) {
    printf("La direccion es: %d y el contenido es: %d\n", numero, *numero);
}

void invertir(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b) {
    if (*a > *b) {
        invertir(a, b);
    }
}
