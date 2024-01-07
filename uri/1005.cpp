#include<stdio.h>
#include<stdint.h>

int main () {
    float A;
    float B;
    scanf("%f", &A);
    scanf("%f", &B);
    // printf("%f %f\n", A, B);
    float med = (3.5*A+7.5*B)/(float)11;
    printf("MEDIA = %.5f\n", med);
    return 0;
}