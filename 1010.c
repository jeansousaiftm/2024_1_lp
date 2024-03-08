#include<stdio.h>

int main() {

    int q1, q2;
    double p1, p2, total;

    scanf("%*d %d %lf", &q1, &p1);
    scanf("%*d %d %lf", &q2, &p2);

    total = (q1 * p1) + (q2 * p2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
