// Dando erro com operator new [] e delete []

#include <string.h>   //Biblioteca para usar o strcpy
#include <stdio.h>
#include <stdlib.h>   //Biblioteca para usar o malloc/new


int main () {
    char        texto1[] = "primeiro texto";
    const char* texto2   = "segundo texto";
    char*       texto3   = (char*) malloc(4*sizeof(char));
    char*       texto4   = new char[4];
    strcpy(texto3, "Ola"); 
    strcpy(texto4, "Ola");

    // imprime: Ola la (seguido de dois endereços)
    printf("%s %s %p %p\n", texto3, texto4+1, texto3, texto4);

    free(texto3);     // Quando usar malloc
    delete[] texto4;  // Quando usar new

    return 0;
}