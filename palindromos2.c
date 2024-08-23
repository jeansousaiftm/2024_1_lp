#include<stdio.h>
#include<string.h>

int main() {
    char tmp[101], tmp2[101];
    scanf("%[^\n]", tmp);
    int i, j;
    for (i = 0, j = 0; i < strlen(tmp); i++) {
        if (tmp[i] != ' ') {
            tmp[j++] = tmp[i];
        }
    }
    tmp[j] = '\0';
    for (i = 0, j = strlen(tmp) - 1; i < strlen(tmp); i++, j--) {
        tmp2[i] = tmp[j];
    }
    tmp2[i] = '\0';
    if (strcmp(tmp, tmp2) == 0) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}
