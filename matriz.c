#include<stdio.h>

int main() {

    int n, m;
    scanf("%d %d", &n, &m);

    int t[n + 1][m + 1];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%d", &t[i][j]);
        }
    }

    int a, b;
    scanf("%d %d", &a, &b);

    int soma = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == a || j == b) {
                soma += t[i][j];
            }
        }
    }

    printf("%d\n", soma);

    return 0;
}
