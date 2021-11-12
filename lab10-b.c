#include <stdlib.h>
#include <stdio.h>

#define N 10

int main () {
    printf("a[0..9]: ");
    int a[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);


    int prod = 1;
    int sum = 0;
    printf("reversed:\t");
    for (int i = 0; i < N; i++){
        printf("%d", a[N-1-i]); 
        sum += a[i];
        prod *= a[i];
        if (i < N - 1) putchar(' ');
    }
    putchar('\n');
    printf("sum:\t%d\nprod:\t%d\n", sum, prod);
    putchar('\n');

    return 0;
}