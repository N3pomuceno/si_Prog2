// exercicio da aula 4. Ordene um vetor na ordem crescente.

#include<stdio.h>

int main() {

    constexpr int N = 10;
    int v[N];
    //
    //
    //
    // Montando vetor
    for (int i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }

    //Ordenação
    for (int i = N - 1; i >= 0; i--) {
        int maior = v[i];
        int posicao = i;
        int temp;
        for (int j = i - 1; j >= 0; j--) {
            if (v[j] > maior) {
                maior = v[j];
                posicao = j;
            }
        }
        temp = v[i];
        v[i] = maior;
        v[posicao] = temp;
    }

    // Impressão
    for (int i = 0; i < N; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}