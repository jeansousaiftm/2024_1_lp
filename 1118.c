#include<stdio.h>

int main() {

    int novo;
    double n1, n2, media;

    do {

        scanf("%lf", &n1);
        while (n1 < 0 || n1 > 10) {
            printf("nota invalida\n");
            scanf("%lf", &n1);
        }

        scanf("%lf", &n2);
        while (n2 < 0 || n2 > 10) {
            printf("nota invalida\n");
            scanf("%lf", &n2);
        }

        media = (n1 + n2) / 2;
        printf("media = %.2lf\n", media);

        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &novo);
        while (novo != 1 && novo != 2) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &novo);
        }

    } while (novo == 1);

    return 0;
}

