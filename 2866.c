#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char tmp[1001];
        scanf("%s", tmp);
        for (int j = strlen(tmp) - 1; j >= 0; j--) {
            if (islower(tmp[j])) {
                printf("%c", tmp[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
