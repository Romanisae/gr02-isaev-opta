#include <stdio.h>

struct record
{
    char drug_name[64];
    char indications[64];
    int exp_years;
    int mfg_years;
};

#define n 3
struct record row[n];

int main()
{
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %d %d", 
        row[i].drug_name, row[i].indications,
        &row[i].exp_years, &row[i].mfg_years);
    }

    printf("name\tindex\texp\tyear\n");

    for (int i = 0; i < n; i++)
    {
        printf("%s %s %d %d\n", row[i].drug_name, row[i].indications,
        row[i].exp_years, row[i].mfg_years);
    }

    return 0;
}