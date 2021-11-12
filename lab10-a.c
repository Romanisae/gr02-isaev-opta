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

    return 0;
}