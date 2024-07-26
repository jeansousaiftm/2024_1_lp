#include<stdio.h>

int validaLinha(int m[][9], int l) {
    int p[10], soma = 0;
    for (int i = 0; i < 10; i++) p[i] = 0;
    for (int i = 0; i < 9; i++) {
        if (p[m[l][i]] != 0) {
            return 0;
        }
        p[m[l][i]]++;
        soma += m[l][i];
    }
    if (soma != 45) return 0;
    return 1;
}

int validaColuna(int m[][9], int c) {
    int p[10], soma = 0;
    for (int i = 0; i < 10; i++) p[i] = 0;
    for (int i = 0; i < 9; i++) {
        if (p[m[i][c]] != 0) {
            return 0;
        }
        p[m[i][c]]++;
        soma += m[i][c];
    }
    if (soma != 45) return 0;
    return 1;
}

int validaBloco(int m[][9], int l, int c) {
    int p[10], soma = 0;
    for (int i = 0; i < 10; i++) p[i] = 0;
    for (int i = l; i < l + 3; i++) {
        for (int j = c; j < c + 3; j++) {
            if (p[m[i][j]] != 0) {
                return 0;
            }
            p[m[i][j]]++;
            soma += m[i][j];
        }
    }
    if (soma != 45) return 0;
    return 1;
}

int main() {

    int n;
    scanf("%d", &n);

    for (int t = 0; t < n; t++) {
        int m[9][9];
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &m[i][j]);
            }
        }
        int r = 1;
        for (int i = 0; i < 9; i++) {
            r = r && validaLinha(m, i);
            r = r && validaColuna(m, i);
        }
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                r = r && validaBloco(m, i, j);
            }
        }
        if (r == 1) {
            printf("Instancia %d\nSIM\n\n", t + 1);
        } else {
            printf("Instancia %d\nNAO\n\n", t + 1);
        }
    }

    return 0;
}
