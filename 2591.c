#include<stdio.h>
#include<string.h>

int main() {

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char tmp[201];
        scanf("%s", tmp);
        int a1 = 0, a2 = 0, m = 0;
        for (int j = 1; j < strlen(tmp); j++) {
            if (tmp[j - 1] != 'a' && tmp[j] == 'a') {
                m++;
            }
            if (m == 1 && tmp[j] == 'a') a1++;
            if (m == 2 && tmp[j] == 'a') a2++;
        }
        printf("k");
        for (int j = 0; j < a1 * a2; j++) {
            printf("a");
        }
        printf("\n");
    }


    return 0;
}
