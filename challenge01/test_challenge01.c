#include <stdio.h>
#include <assert.h>

int suma(int a, int b);

void assertEquals(int esperado, int obtenido, char mensaje[]) {
    if (esperado == obtenido) {
        printf("%s superada (resultado = %d)\n", mensaje,  obtenido);
    } else {
        printf("%s fallida (esperado %d, obtenido %d)\n", mensaje, esperado, obtenido);
    }
}

int main() {
    assertEquals(5, suma(2, 3), "Test 1: suma básica");
    assertEquals(0, suma(2, -2), "Test 2: suma con negativo");
    assertEquals(-4, suma(-2, -2), "Test 3: suma negativa");
    return 0;
}