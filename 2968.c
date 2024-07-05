#include<stdio.h>
#include<math.h>

int main() {

    int v, p;
    scanf("%d %d", &v, &p);
    double t = v * p;

    for (int i = 10; i <= 90; i = i + 10) {
        long long p = (long long) ceil(t * (i / 100.0));
        printf("%lld", p);
        if (i < 90) printf(" ");
    }
    printf("\n");

    return 0;
}
