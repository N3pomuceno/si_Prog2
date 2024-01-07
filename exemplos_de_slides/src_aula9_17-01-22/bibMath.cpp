#include<stdio.h>
#include<math.h>

void mostrar(double resp) {
    printf("%f\n", resp);
}

int main () {
    double a = 0.0; 
    double b = 1.0;
    double c = 2.0;
    double x = 10.0; 
    double y = 20.0;
    double z = 25.0;
    double resposta;

    resposta = cos(a); // Cosseno de zero = 1
    mostrar(resposta);

    resposta = sin(a); // Seno de zero = 0
    mostrar(resposta);

    resposta  = exp(b); // Número de euler elevado a 1, que é o próprio número de euler.
    mostrar(resposta);

    resposta = exp(a); // Número de euler elevado a 0, que é igual a 1.
    mostrar(resposta);

    resposta = log(b); // logaritmo de 1, que é igual a zero, se fosse log de zero daria errado pois ele não considera -infinito como uma resposta válida.
    mostrar(resposta);

    resposta = log(exp(b)); // logaritmo do expoente de 1 é 1.
    mostrar(resposta);

    resposta = pow(x, c); // a potência de base 10 com expoente 2, que dará como resultado 100.
    mostrar(resposta);

    resposta = sqrt(resposta); // raiz quadrada de 100 = 10
    mostrar(resposta);

    resposta = sqrt(z); //raiz quadrada de 25.
    mostrar(resposta);

    resposta = fabs(resposta); // absoluto de 5, que é 5.
    mostrar(resposta);

    return 0;
}