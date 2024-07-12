#include<stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int b, u, t;

        scanf("%d %d", &b, &u);
        if (b > u) {
            t = (b - u) - 1;
        } else {
            t = (u - b) - 1;
        }

        printf("%d\n", t);

    }

    return 0;
}
