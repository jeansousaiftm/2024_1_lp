#include<stdio.h>

int main() {
    int n, i;
    char c;
    while (scanf("%d%*c", &n) && n > 0) {

        int p = 0;

        for (i = 0; i < n; i++) {

            scanf("%c", &c);

            if (c == 'E') p--;
            if (c == 'D') p++;

            if (p > 3) p = 0;
            if (p < 0) p = 3;
        }

        char v[] = { 'N', 'L', 'S', 'O' };
        printf("%c\n", v[p]);
    }

    return 0;
}
