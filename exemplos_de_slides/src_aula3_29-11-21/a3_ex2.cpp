#include <stdio.h>

int main() {
    int num = 0;
    printf("Digite o número \n");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("par\n");
    } else {
        printf("impar\n");
    }
    return 0;
}

// Verifica se um número é par ou é impar.