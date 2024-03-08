#include<stdio.h>

int main() {

    int x, a, m, d;

    scanf("%d", &x);

    a = x / 365;
    x = x % 365;
    m = x / 30;
    d = x % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);

    return 0;
}
