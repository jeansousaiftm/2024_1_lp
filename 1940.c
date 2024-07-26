#include<stdio.h>

int main() {

    int j, r, i, k;
    scanf("%d %d", &j, &r);
    int m[r][j];

    for (i = 0; i < r; i++) {
        for (k = 0; k < j; k++) {
            scanf("%d", &m[i][k]);
        }
    }

    int p[j], maior = 0, posicao;
    for (i = 0; i < j; i++) {
        p[i] = 0;
        for (k = 0; k < r; k++) {
            p[i] += m[k][i];
        }
        if (p[i] >= maior) {
            maior = p[i];
            posicao = i + 1;
        }
    }

    printf("%d\n", posicao);



    return 0;
}
