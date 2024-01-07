#include<stdio.h>
#include<stdlib.h>


typedef struct reg {
    int n;
    char c;
    float *p;
} Reg;

int main () {
    Reg r1;
    Reg *r2;
    r2 = (Reg *)malloc(sizeof(Reg));
    r2 -> n = 0;
    r2 -> c = 'a';
    r2 -> p = (float *)malloc(sizeof(float));
    *(r2 -> p) = 2.71;
    r1.n = 1;
    r1.c = 'b';
    *(r1.p) = 3.14; // nesse caso não pode usar a seta ->, pois r1 é uma agregado e não um ponteiro, e a seta não cabe nessa situação.
    free(r2);
    return 0;
}