#include <stdio.h>
#include <stdint.h>

typedef struct data {
    int32_t dia;
    int32_t mes;
    int32_t ano;
} Data;

typedef short int Boolean;


int main() {

    Data data1, data2;
    Boolean antigo;

    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    //comando de seleção, modo compactado

    if (data1.ano < data2.ano) antigo = 1;
    else if (data1.ano > data2.ano) antigo = 2;
    else {
        if (data1.mes < data2.mes) antigo = 1;
        else if (data1.mes > data2.mes) antigo = 2;
        else {
            if (data1.dia < data2.dia) antigo = 1;
            else if (data1.dia > data2.dia) antigo = 2;
            else antigo = 1; //são iguais.
        }
    }

    if (antigo == 1) printf("%d %d %d\n", data1.dia, data1.mes, data1.ano);
    else printf("%d %d %d\n", data2.dia, data2.mes, data2.ano);

    return 0;
}