#include<stdio.h>
#define P1 2
#define P2 3
#define P3 5

int main() {
    int n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        double n1, n2, n3;
        scanf("%lf %lf %lf", &n1, &n2, &n3);
        double m = (n1 * P1 + n2 * P2 + n3 * P3) / (P1 + P2 + P3);
        printf("%.1lf\n", m);
    }

    return 0;
}
