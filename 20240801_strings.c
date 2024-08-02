#include<stdio.h>
#include<string.h>
#include<ctype.h

// https://cplusplus.com/reference/cctype/
// https://cplusplus.com/reference/cstring/

int main() {

    char nome[100];

    //scanf("%[a-z]", nome);
    //scanf("%[A-Za-z]", nome);
    scanf("%[^\n]", nome);
    printf("%s\n", nome);

    //for (int i = 0; i < 100 && nome[i] != '\0'; i++) {
    for (int i = 0; i < strlen(nome); i++) {
        //printf("%c\n", nome[i]);
        if (islower(nome[i])) {
            nome[i] = toupper(nome[i]);
        }
    }

    char nome2[100];

    //nome2 = nome;
    strcpy(nome2, nome);

    printf("%s\n", nome2);

    /*strcmp
        < 0 string 1 vem antes da string 2
        = 0 string 1 e igual string 2
        > 0 string 1 vem depois da string 2
    */

    printf("%d\n", strcmp("Abacaxi", "Abacaxi"));

    return 0;
}
