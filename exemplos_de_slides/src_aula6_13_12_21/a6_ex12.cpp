//Exemplo da aula de ponteiro

#include <stdio.h>
#include <stdint.h>
#include <optional>

std::optional<int> analise(int32_t n) {
    if (n == 0) {
        return std::nullopt; // None
    } else if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    int32_t numero;
    scanf("%d", &numero);

    auto resposta = analise(numero);
    if (resposta == std::nullopt) {
        printf("O numero eh zero!\n");
    } else if (resposta == 1){
        printf("O numero eh par!\n");
    } else {
        printf("O numero eh impar!\n");
    }
}