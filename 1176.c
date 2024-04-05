#include<stdio.h>

int main() {

    long long fib[61];
    int i, n, x;

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i <= 60; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        printf("Fib(%d) = %lld\n", x, fib[x]);
    }

    return 0;
}
