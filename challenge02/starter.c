#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b == 0) {
        // Manejo de división por cero
        printf("No se puede dividir entre 0\n"); //Señal de error
        return 0;
    }
    return a / b;
}