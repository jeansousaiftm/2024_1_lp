#include<stdio.h>
#include<string.h>

int main() {

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char tmp[10];
        scanf("%s", tmp);
        if (strlen(tmp) == 5) {
            printf("3\n");
        } else {
            int q = 0;
            if (tmp[0] == 'o') q++;
            if (tmp[1] == 'n') q++;
            if (tmp[2] == 'e') q++;
            if (q >= 2) {
                printf("1\n");
            } else {
                printf("2\n");
            }
        }
    }

    return 0;
}
