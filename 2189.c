#include<stdio.h>

int main() {

    int n, t = 1;
    while (scanf("%d", &n) && n > 0) {
        int i, x, g;
        for (i = 1; i <= n; i++) {
            scanf("%d", &x);
            if (x == i) {
                g = x;
            }
        }
        printf("Teste %d\n", t);
        printf("%d\n\n", g);
        t++;
    }

    return 0;
}
