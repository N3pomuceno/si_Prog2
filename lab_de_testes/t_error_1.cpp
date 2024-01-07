// error 1, falta #include<stdio.h>

int main() {
    int n;
    scanf("%d", n);  // error 2, scanf deveria chamar o endereço da variável e não ela, ou seja &n
    printf("O numero lido foi %d\n", n);
}

//error 3, falta return 0