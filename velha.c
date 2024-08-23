#include<stdio.h>

int vencedorLinha(int m[3][3], int l) {
    if (m[l][0] == m[l][1] && m[l][1] == m[l][2]) {
        return m[l][0];
    }
    return 0;
}

int vencedorColuna(int m[3][3], int c) {
    if (m[0][c] == m[1][c] && m[1][c] == m[2][c]) {
        return m[0][c];
    }
    return 0;
}

int vencedorDiagonal(int m[3][3]) {
    if (m[0][0] == m[1][1] && m[1][1] == m[2][2]) {
        return m[0][0];
    }
    if (m[0][2] == m[1][1] && m[1][1] == m[2][0]) {
        return m[0][2];
    }
    return 0;
}

int main() {

    int m[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    for (int l = 0; l < 3; l++) {
        int vl = vencedorLinha(m, l);
        if (vl == 1) {
            printf("O\n");
            return 0;
        }
        if (vl == 2) {
            printf("X\n");
            return 0;
        }
    }

    for (int c = 0; c < 3; c++) {
        int vc = vencedorColuna(m, c);
        if (vc == 1) {
            printf("O\n");
            return 0;
        }
        if (vc == 2) {
            printf("X\n");
            return 0;
        }
    }

    int vd = vencedorDiagonal(m);

    if (vd == 1) {
        printf("O\n");
        return 0;
    }
    if (vd == 2) {
        printf("X\n");
        return 0;
    }

    printf("E\n");
    return 0;
}
