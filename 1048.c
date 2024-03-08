#include<stdio.h>

int main() {

    double salario, perc;

    scanf("%lf", &salario);

    if (salario <= 400) {
        perc = 15;
    } else if (salario <= 800) {
        perc = 12;
    } else if (salario <= 1200) {
        perc = 10;
    } else if (salario <= 2000) {
        perc = 7;
    } else {
        perc = 4;
    }

    double reajuste = salario * (perc / 100);
    double novo = salario + reajuste;

    printf("Novo salario: %.2lf\n", novo);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %.0lf %%\n", perc);

    return 0;
}
