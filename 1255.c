#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {

    int n;
    scanf("%d%*c", &n);

    for (int i = 0; i < n; i++) {

        int qtd[256], maior = 0;

        for (int j = 0; j < 256; j++) {
            qtd[j] = 0;
        }

        char tmp[201];
        scanf("%[^\n]%*c", tmp);

        for (int j = 0; j < strlen(tmp); j++) {
            if (isalpha(tmp[j])) {
                int idx = tolower(tmp[j]);
                qtd[idx]++;
                if (qtd[idx] > maior) {
                    maior = qtd[idx];
                }
            }
        }

        for (int j = 0; j < 256; j++) {
            if (qtd[j] == maior) {
                printf("%c", j);
            }
            //printf("%c %d\n", j, qtd[j]);
        }
        printf("\n");

    }

    return 0;
}
