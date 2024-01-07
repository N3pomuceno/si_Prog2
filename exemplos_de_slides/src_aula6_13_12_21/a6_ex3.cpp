// Testando alterar caracteres.

#include <stdio.h>

int main() {
    char texto1[] = "Primeiro Texto";
    const char* texto2 = "Segundo Texto";

    char* texto3 = texto1;
    char* texto4 = (char*)texto2;
    texto3[0] = 'Z';
    texto4[0] = 'Z';

    printf("%s %s\n", texto1, texto2); // Aparentemente não está funcionando para printar não sei o pq.
    return 0;
}