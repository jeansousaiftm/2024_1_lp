#include<stdio.h>

int main() {

    int a, v, i, x, y, t = 1;

    while (scanf("%d %d", &a, &v) && a + v > 0) {

        int n[a + 1], maximo = 0;

        for (i = 0; i <= a; i++) {
            n[i] = 0;
        }

        for (i = 0; i < v; i++) {
            scanf("%d %d", &x, &y);
            n[x]++;
            n[y]++;
            if (n[x] > maximo) maximo = n[x];
            if (n[y] > maximo) maximo = n[y];
        }

        printf("Teste %d\n", t++);
        for (i = 0; i <= a; i++) {
            if (n[i] == maximo) {
                printf("%d ", i);
            }
        }
        printf("\n\n");

    }

    return 0;
}
