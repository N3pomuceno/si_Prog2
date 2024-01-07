#include<stdio.h>
#include<stdlib.h>


typedef struct reg {
    int n;
    char c;
    float f;
} Reg;

int main () {
    Reg r1;
    Reg *r2;
    r2 = (Reg *)malloc(sizeof(Reg));
    r2 -> n = 0;
    r2 -> c = 'a';
    r2 -> f = 3.14;
    r1.n = 1;
    r1.c = 'b';
    r1.f = 2.71;
    free(r2);
    return 0;
}