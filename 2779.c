#include<stdio.h>

int main() {

    int n, m, x, q = 0;
    scanf("%d", &n);

    int a[n + 1];
    for (int i = 0; i <= n; i++) {
        a[i] = 0;
    }

    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        a[x]++;
    }

    for (int i = 0; i <= n; i++) {
        if (a[i] > 0) {
            q++;
        }
    }

    printf("%d\n", n - q);

    return 0;
}
