#include <stdio.h>
#include "calc.h"

int division(int a, int b) {
    if (b == 0) {
        // Manejo de división por cero
        printf("No se puede dividir entre 0\n"); //Señal de error
        return 0;
    }
    return a / b;
}