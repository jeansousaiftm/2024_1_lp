#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int a[12];
    int soma=0, mult=0, j=9;
    int b1=0, b2=0;
    double d1=0, d2=0;


    for(int i=1;i<=11;i++){

        scanf("%d",&a[i]);
        printf("%d\n", a[i]);
        if(i<10){
            b1=b1+(a[i]*i);
            b2=b2+(a[i]*j);
            j--;
        }
    }

    d1=b1%11;
    d2=b2%11;

    if(d1==a[10] && d2==a[11]){
        printf("CPF valido\n");
    }else{
        printf("CPF invalido\n");
    }


    return 0;
}
