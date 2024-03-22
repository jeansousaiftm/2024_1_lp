#include<stdio.h>

int main() {
    int n, m, i, f;
    scanf("%d", &n);

    int v[n + 1];
    for (i = 0; i <= n; i++) {
        v[i] = 0;
    }

    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%d", &f);
        v[f]++;
    }

    int t = 0;
    for (i = 0; i <= n; i++) {
        //printf("%d ", v[i]);
        if (v[i] > 0) {
            t++;
        }
    }

    printf("%d\n", n - t);

    return 0;
}
