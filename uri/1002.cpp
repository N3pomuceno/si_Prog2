#include <stdio.h>
#include <stdint.h>

int main() {
    constexpr float PI = 3.14159;
    float raio;
    scanf("%f", &raio);
    printf("%f\n", raio);
    float area = PI*raio*raio;
    printf("A=%.4f",area);    
    return 0;
}