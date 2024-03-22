#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int v[n];
    int i;

    int x[] = { 1, 2, 3 };

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    for (i = 0; i < n; i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}
