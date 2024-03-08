#include<stdio.h>

int main() {

    double a, b, c, maior, soma_menores;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a > b && a > c) {
        maior = a;
        soma_menores = b + c;
    } else if (b > c) {
        maior = b;
        soma_menores = a + c;
    } else {
        maior = c;
        soma_menores = a + b;
    }

    if (soma_menores > maior) {
        double perimetro = a + b + c;
        printf("Perimetro = %.1lf\n", perimetro);
    } else {
        double area = ((a + b) * c) / 2;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}
