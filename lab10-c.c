#include <stdlib.h>
#include <stdio.h>

#define N 10

int main () {
    printf("a[0..9]: ");
    int a[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printf("reversed:\t");
    for (int i = 0; i < N; i++){
        printf("%d", a[N-1-i]);
        if (i < N - 1) putchar(' '); 
    }
    putchar('\n');

    int sum = 0;
    int prod = 1;
    printf("idx\telm\tsum\tprod\n");
    for (int i = 0; i < N; i++){
        sum += a[i];
        prod *= a[i];
        printf("%d\t%d\t%d\t%d\n", i, a[i], sum, prod);
    }

    printf("sum:\t%d\nprod:\t%d\n", sum, prod);

    
    return 0;
}