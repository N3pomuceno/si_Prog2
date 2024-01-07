#include <stdio.h>


void hanoi(int n, char origem, char destino, char aux){
    // pedir para alguem mover n-1 pecas
    if (n==1){
        printf("move: %c -> %c\n", origem, destino);
    }

    else {
    hanoi(n-1, origem, aux, destino);
    printf("move: %c -> %c\n", origem, destino);
    hanoi (n-1, aux, destino, origem);
    }
}


int main(){
    // 5 discos
    hanoi(5,'1', '3', '2');

    return 0;
}