#include <stdio.h>

#define n  5

int main() {

    int a[n];
    int m;

    printf("num: ");
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        printf("a%d: ", i);
        scanf("%d", &a[i]);
    }

    printf("a[] = ");
    for (int i = 0; i < m; i++) {
        printf("%d", a[i]);
        if (i < m - 1) putchar(' ');
    }
    putchar('\n');

    int s = 0;
    int p = 1;
    float avg = 0; // avg = sum/count(m);
    for (int i = 0; i < m; i++) {
        s += a[i];
        p *= a[i];
    }
    avg = (float)s / (float)m;
    printf("sum: %d\nprod: %d\navg: %.2f\n", s, p, avg);

    return 0;
}