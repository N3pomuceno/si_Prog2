// Aula 4
// exemplo 3: .Separe inteiros pares de impares, dado um vetor.
#include<stdio.h>

int main () {

    constexpr int N = 10; // é usado o constexpr para que o programa não avise o problema de criar um vetor em cima de uma variável que pode ter valor alterado.
    int v[N];
    for(unsigned int i = 0; i < N; i++) { // Usamos o unsigned int quando sabemos que o valor que estamos guardando sempre será não negativo, ou seja, zero ou positivo.
        v[i] = (i+3) + 17;
    }
    // Checando valores.
    for(unsigned int i = 0; i < N; i++) {
        printf("%d ", v[i]);  
    }
    printf("\n");

    // 
    int pares[N];
    int impares[N];
    int i=0;  // conta pares 
    int j=0;  // conta impares

    for (unsigned k=0; k<N; k++) {
        // par 
        if (v[k]%2 == 0) {
            pares[i] = v[k];
            i++;
        } else {    //impar
            impares[j] = v[k];
            j++;
        }
    }

    printf("Impressão dos valores:\n");
    printf("Pares\n");
        for(unsigned int k = 0; k < i; k++) {
        printf("%d ", pares[k]);  
    }
    printf("\n");
    printf("Impares\n");
        for(unsigned int k = 0; k < j; k++) {
        printf("%d ", impares[k]);  
    }
    printf("\n");

    return 0;
}