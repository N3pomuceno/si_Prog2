#include <stdio.h>

// 3. Escreva uma função recursiva que recebe como parâmetro um inteiro decimal
// x e imprime o número na forma binária(no vetor de booleanos v)
//
void funcao(int x, bool v[], int n) {
    // escreva aqui o seu código recursivo
    if (x == 0) {
        v[n-1] = x;
        return;
    } else if (x == 1) {
        v[n-1] = x;
        return;
    }
    if (x % 2 == 0) {
        v[n-1]= false;
        funcao(x/2, v, n-1);
    } else {
        v[n-1]= true;
        funcao(x/2, v, n-1);
    }
    return;
}

void exercicio03(int x, bool v[]) {
    funcao(x, v, 10);
}

void mostrar(bool v[], int n) {
    printf("O vetor é :");
    for (int i=0; i < n; i++) {
        printf(" %d ", v[i]);
    }
}

int main () {
    bool v[10];
    for (unsigned i = 0; i < 10; i++){
        v[i] = false;
    }
    exercicio03(10, v);
    mostrar(v, 10);
    return 0;
}

  //
  // dica: o número x é positivo e pequeno (<= 255) e o vetor v tem espaço
  // suficiente em dígitos binários (por padrão, 10)
  //
  // dica 2: o vetor v já vem todo "zerado" (todos valores 0 são "false")
  // dica 3: a saída deve ser em "big endian" (ou seja, como costumamos
  // escrever: zero à esquerda "não conta")
