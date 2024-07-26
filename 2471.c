#include<stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);
    int m[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    int sl[n], sc[n];
    for (i = 0; i < n; i++) {
        sl[i] = 0;
        sc[i] = 0;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            sl[i] += m[i][j];
            sc[j] += m[i][j];
        }
    }

    int lc, cc;

    if (sl[0] == sl[1]) {
        lc = sl[0];
    } else {
        lc = sl[2];
    }

    if (sc[0] == sc[1]) {
        cc = sc[0];
    } else {
        cc = sc[2];
    }

    int li, ci;
    for (i = 0; i < n; i++) {
        if (sl[i] != lc) {
            li = i;
        }
        if (sc[i] != cc) {
            ci = i;
        }
    }

    int dif = 0;
    //printf("%d %d\n", sl[li], lc);
    //if (sl[li] > lc) {
    //    dif = lc - sl[li];
    //} else {
        dif = sl[li] - lc;
    //}

    printf("%d %d\n", m[li][ci] - dif, m[li][ci]);

    return 0;
}
