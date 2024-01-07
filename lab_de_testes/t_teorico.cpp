#include<stdio.h>
int main() {
    int x, *p, **q, **w;
    p = &x;
    q = &p;
    w = &p+10;
    x= 10;
    (*p)++;
    p++;
    printf("\n%d\n", x);
    return (0);
}