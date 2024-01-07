#include<stdio.h>
#include<stdint.h>

int main () {
    int32_t number; 
    int32_t A;
    float B;
    scanf ("%d", &number);
    scanf ("%d", &A);
    scanf ("%f", &B);
    float salary = B *(float)A;
    printf ("NUMBER = %d\n", number);
    printf ("SALARY = U$ %.2f\n", salary);
    return 0;
}