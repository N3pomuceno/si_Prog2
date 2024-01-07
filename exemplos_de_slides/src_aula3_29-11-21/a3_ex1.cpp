#include <stdio.h>

int main() {
    int num;
    printf("Digite o número: ");
    scanf("%d", &num);
    if (num >= 0 && num <= 100) {
        printf("Sim\n");
    } else {
        printf("Não\n");
        return 0;
    }
}

// Verifica se o número está no intervalo de 0 a 100