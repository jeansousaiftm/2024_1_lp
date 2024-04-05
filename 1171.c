#include<stdio.h>

int main() {

    int n, x, i, v[2001];

    scanf("%d", &n);

    for (i = 0; i <= 2000; i++) {
        v[i] = 0;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        v[x]++;
    }

    for (i = 0; i <= 2000; i++) {
        if (v[i] > 0) {
            printf("%d aparece %d vez(es)\n", i, v[i]);
        }
    }

    return 0;
}
