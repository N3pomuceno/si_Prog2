#include<stdio.h>

void exercicio03(int x, bool v[]) {

  // escreva aqui o seu código recursivo
    if (x / 2 == 0) {
        printf("%d", v); 
        return;
    }
    if (x % 2 == 0) {
        v += 0;
        exercicio03(x/2, v);
    } else {
        v += 1;
        exercicio03(x/2, v);
    }
}

int main (){
    bool v[10];
    for (unsigned i = 0; i < 10; i++)
        v[i] = false;
    exercicio03(10, v);
}