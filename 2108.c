#include<stdio.h>
#include<string.h>

void copiarMaior(char tmp[], char palavra[], int t, int p) {
    for (int i = 0, j = p - t; i < t; i++, j++) {
        palavra[i] = tmp[j];
    }
    palavra[t] = '\0';
}

int main() {

    int maior = 0;
    char tmp[101], palavra[101];

    scanf("%[^\n]%*c", tmp);

    while (strcmp(tmp, "0") != 0) {

        int q = 0, i;
        for (i = 0; i < strlen(tmp); i++) {
            if (tmp[i] == ' ') {
                printf("%d-", q);
                if (q >= maior) {
                    copiarMaior(tmp, palavra, q, i);
                    maior = q;
                }
                q = 0;
            } else {
                q++;
            }
        }
        printf("%d\n", q);
        if (q >= maior) {
            copiarMaior(tmp, palavra, q, i);
            maior = q;
        }

        scanf("%[^\n]%*c", tmp);
    }

    printf("\nThe biggest word: %s\n", palavra);

    return 0;
}
