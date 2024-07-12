#include<stdio.h>

int main() {

    char a[10], b[3];

    while (scanf("%c%c%c.%c%c%c.%c%c%c-%c%c%*c"
          , &a[1], &a[2], &a[3]
          , &a[4], &a[5], &a[6]
          , &a[7], &a[8], &a[9]
          , &b[1], &b[2]) != EOF) {

        int dv1 = 0;
        for (int i = 1; i <= 9; i++) {
            int n = a[i] - '0';
            dv1 = dv1 + (n * i);
        }
        dv1 = dv1 % 11;
        if (dv1 == 10) {
            dv1 = 0;
        }

        int dv2 = 0;
        for (int i = 1, j = 9; i <= 9; i++, j--) {
            int n = a[i] - '0';
            dv2 = dv2 + (n * j);
        }
        dv2 = dv2 % 11;
        if (dv2 == 10) {
            dv2 = 0;
        }

        //printf("%d %d\n", dv1, dv2);

        int b1i = b[1] - '0', b2i = b[2] - '0';

        if (b1i == dv1 && b2i == dv2) {
            printf("CPF valido\n");
        } else {
            printf("CPF invalido\n");
        }

    }

    return 0;
}
