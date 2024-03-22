#include<stdio.h>

int main() {

    int n;

    while (scanf("%d", &n) && n > 0) {

        int j1 = 0, j2 = 0, i, x, y;

        for (i = 0; i < n; i++) {
            scanf("%d %d", &x, &y);
            if (x > y) {
                j1++;
            } else if (x < y) {
                j2++;
            }
        }

        printf("%d %d\n", j1, j2);

    }

    return 0;
}
