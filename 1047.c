#include<stdio.h>

int main() {

    int h1, m1, t1, h2, m2, t2, hf, mf, tf;

    scanf("%d %d", &h1, &m1);
    t1 = h1 * 60 + m1;

    scanf("%d %d", &h2, &m2);
    t2 = h2 * 60 + m2;

    if (t1 < t2) {
        tf = t2 - t1;
        hf = tf / 60;
        mf = tf % 60;
    } else if (t1 == t2) {
        hf = 24;
        mf = 0;
    } else {
        tf = (1440 - t1) + t2;
        hf = tf / 60;
        mf = tf % 60;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf, mf);

    return 0;
}
