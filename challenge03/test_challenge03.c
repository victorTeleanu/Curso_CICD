#include <stdio.h>
#include <assert.h>

size_t mi_strlen(const char *s);
int mi_strcmp(const char *s1, const char *s2);
char *mi_strcpy(char *dest, const char *src);

int main() {
    //Pruebas srtlen
    assert(mi_strlen("Hola") == 4);
    assert(mi_strlen("") == 0);

    //Pruebas strcmp
    assert(mi_strcmp("hola", "hola") == 0);
    assert(mi_strcmp("", "") == 0);
    assert(mi_strcmp("holaa", "hola") > 0);
    assert(mi_strcmp("hola", "holaa") < 0);

    //Pruebas strcpy
    char dest[30];
    mi_strcpy(dest, "test");
    assert(mi_strcmp(dest, "test") == 0);
    mi_strcpy(dest, "Buenos días");
    assert(mi_strcmp(dest, "Buenos días") == 0);
    mi_strcpy(dest, "");
    assert(mi_strcmp(dest, "") == 0);

    printf("TEST COMPLETADOS EXITOSAMENTE");
}
