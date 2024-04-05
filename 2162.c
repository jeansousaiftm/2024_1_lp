#include<stdio.h>

int main() {

    int n, i;
    scanf("%d", &n);
    int v[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    if (n == 2) {
        if (v[0] == v[1]) {
            printf("0\n");
        } else {
            printf("1\n");
        }
        return 0;
    }

    for (i = 2; i < n; i++) {

        if (v[i] > v[i - 1] && v[i - 1] < v[i - 2]) {
            continue;
        }

        if (v[i] < v[i - 1] && v[i - 1] > v[i - 2]) {
            continue;
        }

        printf("0\n");
        return 0;

    }

    printf("1\n");

    return 0;
}
