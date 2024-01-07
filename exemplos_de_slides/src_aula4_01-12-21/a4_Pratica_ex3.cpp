// Exemplo 3: Multiplicação de matrizes 100x100

#include<stdio.h>

int main() {

    constexpr int N = 3;
    // matriz C = A x B
    //
    //
    int A[N][N];
    int B[N][N];
    int C[N][N];

    for(int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = B[i][j] = i*N+j;
        }
    }
    // Checagem
    printf("A:\n");
    for(int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("B:\n");
    for(int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Multiplicação
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k]* B[k][j];
            }
        }
    }
    //Impressão
    printf("C:\n");
    for(int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}