#include<stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    int s = ((1 + n) / 2.0) * n;
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &x);
        s -= x;
    }
    printf("%d\n", s);
    return 0;
}

