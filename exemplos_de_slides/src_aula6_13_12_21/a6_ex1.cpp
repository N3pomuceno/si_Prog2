#include <stdio.h>
#include <stdint.h>


void impressao(int32_t result) { // praticando a utilização de função void.
    printf("O resultado da soma eh %d\n", result);
    return;
}
//  Void functions are mostly used in two classes of functions. 
//
// The first is a function that prints information for the user to read. For example (for our purposes), 
// the printf function is treated as a void function. (In actuality, 
// printf returns an integer which is the number of characters printed... but we almost always ignore this value.) 
//
// The second use of void functions is with "reference" parameters (e.g., Arrays). 
// A reference parameter is not a copy of the input data, as is so often the case. 
// A reference parameter is an "alias" for the same bucket in memory as the input data. 
// Thus any change made to a reference parameter is in fact made to the original variable!
//


int soma(int32_t n1, int32_t n2, int32_t n3) {
    int32_t resultado = n1 + n2 + n3;
    return resultado; // Posso colocar para retornar diretamente a soma no return como "return n1 +n2 +n3;
}


int main () {
    int32_t x1;
    int32_t x2;
    int32_t x3;
    scanf("%d %d %d", &x1, &x2, &x3);
    impressao(soma(x1, x2, x3));
    return 0;
}
