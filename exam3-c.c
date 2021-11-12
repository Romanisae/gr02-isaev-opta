
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
int N, a;
int sum = 0;
int *m;

printf("Enter number of your marks: ");
scanf("%d", &N);

m = (int*) malloc(N * sizeof(int));

printf("Enter data manually?\n 1 - yes, another num - no : ");
scanf("%d", &a);

    if (a == 1) {
        for (int i = 0; i < N; i++)
        {
            printf("m[%d] = ", i);
            scanf("%d", &m[i]);
            sum += m[i];
        }

        float GPA = (float)sum / (float)N;
        printf("GPA = %1.2f\n", GPA);

        if (GPA < 4.6) 
            printf("Your GPA < 4.6\n");
        else
            printf("Your GPA is enough to go to university\n");
    
    free(m);
    return 0;
    }

    else {
        for (int i = 0; i < N; i++)
        {
            m[i] = rand() % 5 + 2;
            printf("m[%d] = ", i);  printf("%d\n", m[i]);
            sum += m[i];
        }
    
        float GPA = (float)sum / (float)N;
        printf("GPA = %1.2f\n", GPA);

        if (GPA < 4.6) 
            printf("Your GPA < 4.6\n");
        else
            printf("Your GPA is enough to go to university\n");
    
    free(m);
    return 0;
    }
}
