#include<stdio.h>

int main() {

    int b[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int n, m1, m2, m, j1, j2, j, x;
    scanf("%d %d %d %d %d", &n, &j1, &j2, &m1, &m2);

    b[j1]++;
    b[j2]++;
    b[m1]++;
    b[m2]++;

    if (j1 > 10) j1 = 10;
    if (j2 > 10) j2 = 10;
    if (m1 > 10) m1 = 10;
    if (m2 > 10) m2 = 10;

    j = j1 + j2;
    m = m1 + m2;


    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        b[x]++;
        if (x > 10) x = 10;
        j += x;
        m += x;
    }

    if (j > m) {
        int e = 24 - j;
        while (e <= 10) {
            if (b[e] < 4) {
                if (m + e > 23) {
                    printf("-1\n");
                    return 0;
                } else {
                    printf("%d\n", e);
                    return 0;
                }
            }
            e++;
        }
    } else {
        int g = 23 - m;
        if (b[g] < 4) {
            printf("%d\n", g);
            return 0;
        } else {
            printf("-1\n");
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
