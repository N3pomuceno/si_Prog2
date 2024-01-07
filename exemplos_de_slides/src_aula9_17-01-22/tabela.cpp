#include<stdio.h>

int main () {
    for (int k = 0; k < 16; k++) {
        for (int i = 0; i < 8 ; i++) {
            int carac = i+k*8;
            printf("%3d -> %c        ", carac, carac);
        }
        printf("\n");
    }
    return 0;
}