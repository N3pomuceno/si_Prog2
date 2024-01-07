#include<stdio.h>
#include<stdint.h>

int main () {
    char str[15];
    double base;
    double vendas;
    scanf("%s", &str);
    scanf("%lf", &base);
    scanf("%lf", &vendas);
    double salarioFinal = base + 0.15*vendas; 
    printf("TOTAL = R$ %.2f\n", salarioFinal);
    return 0;
}