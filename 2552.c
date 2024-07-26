#include<stdio.h>

int main() {

    int n, m, i, j;

    while (scanf("%d %d", &n, &m) != EOF) {
        int t[n][m];

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                scanf("%d", &t[i][j]);
                if (t[i][j] == 1) {
                    t[i][j] = 9;
                }
            }
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                if (t[i][j] == 9) continue;
                if (j < m - 1) {
                    if (t[i][j + 1] == 9) {
                        t[i][j]++;
                    }
                }
                if (j > 0) {
                    if (t[i][j - 1] == 9) {
                        t[i][j]++;
                    }
                }
                if (i < n - 1) {
                    if (t[i + 1][j] == 9) {
                        t[i][j]++;
                    }
                }
                if (i > 0) {
                    if (t[i - 1][j] == 9) {
                        t[i][j]++;
                    }
                }
            }
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                printf("%d", t[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
