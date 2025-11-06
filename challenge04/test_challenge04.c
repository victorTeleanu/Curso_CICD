#include <stdio.h>
#include <assert.h>

int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);

void test_suma() {
    assert(suma(2, 3) == 5);
    assert(suma(2, -2) == 0);
    assert(suma(-2, -2) == -4);
}

void test_resta() {
    assert(resta(10, 5) == 5);
    assert(resta(-5, 5) == -10);
    assert(resta(-10, -5) == -5);
}

void test_multiplicacion() {
    assert(multiplicacion(4, 5) == 20);
    assert(multiplicacion(-3, 5) == -15);
    assert(multiplicacion(-2, -3) == 6);
}

void test_division() {
    assert(division(20, 5) == 4);
    assert(division(-9, 3) == -3);
    assert(division(-8, -4) == 2);
    assert(division(5, 0) == 0);
}

int main() {
    test_suma();
    test_resta();
    test_multiplicacion();
    test_division();
    printf("TODOS LOS TESTS FINALIZADOS CORRECTAMENTE");
    return 0;
}
