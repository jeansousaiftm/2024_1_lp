#include<stdio.h>

int main() {

    int x;
    char resp = 'S';

    for (int i = 0; i < 8; i++) {
        scanf("%d", &x);
        if (x != 0 && x != 1) resp = 'F';
    }

    printf("%c\n", resp);

    return 0;
}
