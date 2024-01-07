// ===================================================
// Lista de Exercícios A1
// Curso de Programação II
// https://igormcoelho.github.io/curso-programacao-ii
// ===================================================
//
// Nome: João Nepomuceno Freitas de Azevedo
// Data: 31/01/2022
//
// ===================================================

#include <stdio.h>

// 2. Escreva uma função recursiva que recebe como parâmetros o dígito K e um
// número natural N e determina quantas vezes o dígito K ocorre em N. Por
// exemplo, o dígito 2 ocorre 3 vezes em 762021192
//
int exercicio02(int k, int n) {
    int contagem = 0;
    if (n/10>0) {
        if (n % 10 == k) {
            contagem += 1;
        }
        contagem += exercicio02(k, n/10);
    } else {
        if (n % 10 == k) {
            contagem += 1;
        }
    }
    return contagem;
}

int main () {
    int num = exercicio02(2, 762021192);
    printf("%d\n", num);
}