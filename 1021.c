#include<stdio.h>

int main() {

    int n, m;

    scanf("%d.%d", &n, &m);

    int n100 = n / 100;
    n = n % 100;
    int n50 = n / 50;
    n = n % 50;
    int n20 = n / 20;
    n = n % 20;
    int n10 = n / 10;
    n = n % 10;
    int n5 = n / 5;
    n = n % 5;
    int n2 = n / 2;
    int n1 = n % 2;

    int m50 = m / 50;
    m = m % 50;
    int m25 = m / 25;
    m = m % 25;
    int m10 = m / 10;
    m = m % 10;
    int m5 = m / 5;
    int m1   = m % 5;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", n1);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m1);

    return 0;
}
