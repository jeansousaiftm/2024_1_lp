#include<stdio.h>

int main() {

    int a, b, m = 0;
    scanf("%d %d", &a, &b);

    if (a > b && a % b == 0) {
        m = 1;
    }
    if (b > a && b % a == 0) {
        m = 1;
    }

    if (m == 1) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}
