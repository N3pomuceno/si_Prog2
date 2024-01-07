#include <stdio.h>

int main() {
    int dia1, mes1, ano1, dia2, mes2, ano2;
    int antigo;
    scanf("%d %d %d %d %d %d", &dia1, &mes1, &ano1, &dia2, &mes2, &ano2);
    if (ano1 < ano2) {
        antigo = 1;
    } else if (ano2 < ano1) {
        antigo = 2;
    } else {
        if (mes1 < mes2) {
            antigo = 1;
        } else if (mes2 < mes1) {
            antigo = 2;
        } else {
            if (dia1 < dia2) {
                antigo = 1;
            } else if (dia2 < dia1) {
                antigo = 2;
            } else {
                antigo = 1; // caso em que são o mesmo dia
            }
        }
    }
    if (antigo == 1) {
        printf("%d/%d/%d", dia1, mes1, ano1);
    } else {
        printf("%d/%d/%d", dia2, mes2, ano2);
    }
}