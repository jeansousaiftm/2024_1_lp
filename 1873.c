#include<stdio.h>
#include<string.h>

int ganha(char s1[], char s2[]) {

    if (strcmp("tesoura", s1) == 0) {
        if (strcmp("lagarto", s2) == 0
            || strcmp("papel", s2) == 0) {
            return 1;
        }
    }

    if (strcmp("papel", s1) == 0) {
        if (strcmp("pedra", s2) == 0
            || strcmp("spock", s2) == 0) {
            return 1;
        }
    }

    if (strcmp("pedra", s1) == 0) {
        if (strcmp("lagarto", s2) == 0
            || strcmp("tesoura", s2) == 0) {
            return 1;
        }
    }

    if (strcmp("lagarto", s1) == 0) {
        if (strcmp("spock", s2) == 0
            || strcmp("papel", s2) == 0) {
            return 1;
        }
    }

    if (strcmp("spock", s1) == 0) {
        if (strcmp("pedra", s2) == 0
            || strcmp("tesoura", s2) == 0) {
            return 1;
        }
    }

    return 0;
}

int main() {

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char s1[10], s2[10];
        scanf("%s %s", s1, s2);
        if (ganha(s1, s2) == 1) {
            printf("rajesh\n");
        } else if (ganha(s2, s1)) {
            printf("sheldon\n");
        } else {
            printf("empate\n");
        }
    }


    return 0;
}
