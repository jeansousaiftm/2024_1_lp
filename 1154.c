#include<stdio.h>

int main() {

    int i, s = 0, q = 0;

    while (scanf("%d", &i) && i >= 0) {
        s += i;
        q++;
    }

    double media = (double) s / q;

    printf("%.2lf\n", media);

    return 0;
}
