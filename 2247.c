#include<stdio.h>

int main() {
    int n, t = 1;
    while (scanf("%d", &n) && n > 0) {
        printf("Teste %d\n", t++);
        int c = 0, i, j, z;
        for (i = 0; i < n; i++) {
            scanf("%d %d", &j, &z);
            c += (j - z);
            printf("%d\n", c);
        }
        printf("\n");
    }
    return 0;
}
