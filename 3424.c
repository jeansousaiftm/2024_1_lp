#include<stdio.h>

int main() {

    int n, q = 0;
    char s[100001];

    scanf("%d", &n);
    scanf("%s", s);

    for (int i = 1; i < n; i++) {
        if (s[i] == 'a' && s[i - 1] == 'a') {
            q++;
            if (i - 1 == 0) {
                q++;
            } else if (s[i - 2] == 'b') {
                q++;
            }
        }
    }

    printf("%d\n", q);


    return 0;
}
