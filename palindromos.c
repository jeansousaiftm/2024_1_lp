#include<stdio.h>
#include<string.h>

int main() {
    int resp = 1;
    char tmp[101];
    scanf("%[^\n]", tmp);

    for (int i = 0, j = strlen(tmp) - 1; i <= j; i++, j--) {
        while (tmp[i] == ' ') i++;
        while (tmp[j] == ' ') j--;
        if (i > j) {
            break;
        }
        if (tmp[i] != tmp[j]) {
            resp = 0;
            break;
        }
    }
    printf("%d\n", resp);

    return 0;
}
