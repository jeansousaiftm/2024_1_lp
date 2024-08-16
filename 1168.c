#include<stdio.h>
#include<string.h>

int main() {

    int qleds[] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };

    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int total = 0;
        char tmp[1001];
        scanf("%s", tmp);
        for (int j = 0; j < strlen(tmp); j++) {
            total += qleds[tmp[j] - 48];
        }
        printf("%d leds\n", total);
    }

    return 0;
}
