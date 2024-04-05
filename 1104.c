#include<stdio.h>

int main() {

    int a, b, i, x;

    while (scanf("%d %d", &a, &b) && a + b > 0) {
        int ca[100001], cb[100001];
        for (i = 0; i <= 100000; i++) {
            ca[i] = 0;
            cb[i] = 0;
        }
        for (i = 0; i < a; i++) {
            scanf("%d", &x);
            ca[x]++;
        }
        for (i = 0; i < b; i++) {
            scanf("%d", &x);
            cb[x]++;
        }
        int ta = 0, tb = 0;
        for (i = 0; i <= 100000; i++) {
            if (ca[i] > 0 && cb[i] == 0) ta++;
            if (cb[i] > 0 && ca[i] == 0) tb++;
        }
        if (ta < tb) {
            printf("%d\n", ta);
        } else {
            printf("%d\n", tb);
        }
    }

    return 0;
}
