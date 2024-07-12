#include<stdio.h>

int main() {

    int v, t = 1;

    while (scanf("%d", &v) && v > 0) {
        int d50 = v / 50;
        v = v % 50;
        int d10 = v / 10;
        v = v % 10;
        int d5 = v / 5;
        int d1 = v % 5;
        printf("Teste %d\n", t++);
        printf("%d %d %d %d\n\n", d50, d10, d5, d1);
    }

    return 0;
}
