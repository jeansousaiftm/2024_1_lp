#include<stdio.h>
int main() {

    int n, c, x;
    char resp = 'S';

    scanf("%d %d", &n, &c);

    for (int i = 1; i < n; i++) {
        scanf("%d", &x);
        if (x > c) {
            resp = 'N';
        }
    }

    printf("%c\n", resp);

    return 0;
}
