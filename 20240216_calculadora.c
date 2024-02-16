#include<stdio.h>

int main() {

    int a, b;
    char op;

    scanf("%d%c%d", &a, &op, &b);

    if (op == '+') {
        int soma = a + b;
        printf("%d\n", soma);
    } else if (op == '-') {
        int sub = a - b;
        printf("%d\n", sub);
    } else if (op == '*') {
        int mult = a * b;
        printf("%d\n", mult);
    } else if (op == '/') {
        double div = (double) a / b;
        printf("%.2lf\n", div);
    } else {
        printf("Operacao Invalida\n");
    }

    /*
    soma = a + b;
    sub = a - b;
    mult = a * b;
    div = (double) a / b;

    printf("%d %d %d %.3lf\n", soma, sub, mult, div);
    */

    return 0;
}
