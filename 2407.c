#include<stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);
    int m[n][n];
    int p[n * n + 1];

    for (i = 0; i <= n * n; i++) {
        p[i] = 0;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
            p[m[i][j]]++;
        }
    }

    int sl[n], sc[n], dp = 0;
    for (i = 0; i < n; i++) {
        sl[i] = 0;
        sc[i] = 0;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            sl[i] += m[i][j];
            sc[j] += m[i][j];
            if (i == j) dp += m[i][j];
        }
    }

    int q = dp;

    for (i = 0; i < n; i++) {
        if (sl[i] != dp) {
            q = 0;
        }
        if (sc[i] != dp) {
            q = 0;
        }
    }

    for (i = 1; i <= n * n; i++) {
        if (p[i] != 1) {
            q = 0;
        }
    }

    printf("%d\n", q);

    return 0;
}
