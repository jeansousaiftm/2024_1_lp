#include<stdio.h>

int main() {

    int n, x;
    scanf("%d", &n);
    int f[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &f[i]);
    }
    scanf("%d", &x);

    if (x < 65) {
        printf("%d\n", n + 1);
    } else {
        int i = 0;
        while (f[i] >= 65 && i < n) {
            i++;
        }
        printf("%d\n", i + 1);
    }



    return 0;
}
