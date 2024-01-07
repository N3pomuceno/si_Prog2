// ===================================================
// Lista de Exercícios A1
// Curso de Programação II
// https://igormcoelho.github.io/curso-programacao-ii
// ===================================================
//
// Nome: João Nepomuceno Freitas de Azevedo
// Data: 01/02/2022
//
// ===================================================

#include <stdio.h>


// Escreva uma função recursiva que recebe como parâmetros dois vetores de
// inteiros v1 e v2 (com tamanhos n1 e n2) sem valores repetidos neles e entre
// eles e ordenados de forma crescente e suas dimensões e retorne um vetor v3
// que é a união dos dois vetores ordenados de forma crescente
//
void exercicio04(int v1[], int n1, int v2[], int n2, int v3[], int n3) {
    if (n3 == 0) {
        return;
    }
    if (n1 == 0) {
        for (int i = n2-1; i >= 0; i--) {
            v3[n3-1] = v2[i];
            n3--;
        }
        return;
    } else if (n2 == 0) {
        for (int i = n1-1; i >= 0; i--) {
            v3[n3-1] = v1[i];
            n3--;
        }
        return;
    }


    if (v1[n1-1] >= v2[n2-1]) {
        v3[n3-1] = v1[n1-1];
        exercicio04(v1, n1-1, v2, n2, v3, n3-1);
        // return;
    } else {
        v3[n3-1] = v2[n2-1];
        exercicio04(v1, n1, v2, n2-1, v3, n3-1);
        // return;
    }

    // Só para mostrar que está funcionando
    if (n3 == 8) {
        printf("v3:");
        for (int  i = 0; i < n3; i++) {
            printf(" %d", v3[i]);
            // fflush(stdout);
        }
        printf("\n");
    }
    return;
    
    // escreva aqui o seu código recursivo
}

int main () {
    int v1[3] = {2, 4, 6};
    int v2[5] = {1, 3, 5, 7, 9};
    int v[8];
    exercicio04(v1, 3, v2, 5, v, 8);
}