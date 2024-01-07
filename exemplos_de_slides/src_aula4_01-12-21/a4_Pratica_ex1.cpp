// .cpp permite tanto C quanto C++

// Aula 4
// exemplo 2: Achar o maior exemplo de um vetor de número positivos.

#include <stdio.h>

int main() {

    int v[5];
    int N = 5;
    for (int i = 0; i<N; i++) {
        scanf("%d", &v[i]); // & endereço
    }

    // conferir valores
    for (int i = 0; i<N; i++) {
        printf("%d ", v[i]); // conteúdo
    }
    printf("\n");

    //===============================================
    printf("Vai encontrar o maior!\n");
    int maior = -1; //não existe melhor do que -1

    for (int i = 0; i<N; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    printf("O maior elemento do vetor é : %d\n", maior);

    return 0;
}