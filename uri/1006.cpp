#include<stdio.h>
#include<stdint.h>

int main () {

    float A;
    float B;
    float C;
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    // printf("%f %f\n", A, B);
    float med = (2*A+3*B+5*C)/(float)10;
    printf("MEDIA = %.1f\n", med);
    return 0;
}
