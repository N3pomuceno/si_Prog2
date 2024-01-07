#include <stdio.h>

int main() {
    int b1, b2, b3, b4;
    int num;
    printf("Digite os digitos: ");
    scanf("%d %d %d %d", &b1, &b2, &b3, &b4);
    num = 2*2*2*b1 + 2*2*b2 + 2*b3 + b4;
    printf("O valor é %d\n", num);
    return 0;
}

// Converte umnúmero binário de 4 dígitod para decimal.