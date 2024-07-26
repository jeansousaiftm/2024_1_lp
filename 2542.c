#include<stdio.h>

int main() {
    int n, m, l, i, j;
    while (scanf("%d", &n) != EOF) {
        scanf("%d %d", &m, &l);
        long long cm[m][n], cl[l][n];

        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                scanf("%lld", &cm[i][j]);
            }
        }
        for (i = 0; i < l; i++) {
            for (j = 0; j < n; j++) {
                scanf("%lld", &cl[i][j]);
            }
        }

        int x, y, z;

        scanf("%d %d %d", &x, &y, &z);
        x--;
        y--;
        z--;

        if (cm[x][z] > cl[y][z]) {
            printf("Marcos\n");
        } else if (cl[y][z] > cm[x][z]) {
            printf("Leonardo\n");
        } else {
            printf("Empate\n");
        }
    }

    return 0;
}
