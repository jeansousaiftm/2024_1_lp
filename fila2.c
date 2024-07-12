#include<stdio.h>

int main() {

    int n, x, p = 0;
    scanf("%d", &n);
    int f;

    for (int i = 0; i < n; i++) {
        scanf("%d", &f);
        if (f >= 65) p = i;
    }
    scanf("%d", &x);

    if (x < 65) {
        printf("%d\n", n + 1);
    } else {
        printf("%d\n", p + 1);
    }



    return 0;
}
