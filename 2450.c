#include<stdio.h>

int main() {

    char resp = 'S';
    int n, m, i, j, p = -1;
    scanf("%d %d", &n, &m);
    int t[n][m];

    for (i = 0; i < n; i++) {
        int difZero = 0;
        for (j = 0; j < m; j++) {
            scanf("%d", &t[i][j]);
            if (j <= p && t[i][j] != 0) {
                resp = 'N';
            }
            if (j > p && difZero == 0) {
                if (t[i][j] == 0) {
                    p++;
                } else {
                    p++;
                    difZero = 1;
                }
            }
        }
    }
    printf("%c\n", resp);
    return 0;
}
