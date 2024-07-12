#include<stdio.h>

int eBissexto(int a) {
    if (a % 400 == 0) {
        return 1;
    }
    if (a % 4 == 0 && a % 100 != 0) {
        return 1;
    }
    return 0;
}

int calcularDias(int d, int m, int a) {
    int totalDias = 0;
    for (int i = 1970; i < a; i++) {
        totalDias += 365;
        if (eBissexto(i)) {
            totalDias++;
        }
    }
    int qtdDiasMes[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (eBissexto(a)) qtdDiasMes[2]++;
    for (int i = 1; i < m; i++) {
        totalDias += qtdDiasMes[i];
    }
    totalDias += d;
    return totalDias;
}

int main() {

    int x;

    scanf("%d", &x);

    for (int i = 0; i < x; i++) {

        int d1, m1, a1, d2, m2, a2;

        scanf("%d-%d-%d %d-%d-%d", &a1, &m1, &d1, &a2, &m2, &d2);

        int dias1 = calcularDias(d1, m1, a1);
        int dias2 = calcularDias(d2, m2, a2);

        int diferenca = 0;
        if (dias1 < dias2) {
            diferenca = dias2 - dias1;
        } else {
            diferenca = dias1 - dias2;
        }

        printf("%d\n", diferenca);

    }


    return 0;
}
