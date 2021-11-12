#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_lastname 50
#define num_marks 3
#define mark_max 5
#define mark_min 2

struct element
{
    char lastname[max_lastname];
    int marks[num_marks];

    struct element *prev;
    struct element *next;
};

struct element *first = NULL;
struct element *last = NULL;

int main ()
{
    FILE *f = fopen ("extask02-a.text", "r");

    while (1)
    {
        char lastname[max_lastname];
        if (fscanf(f, "%s", lastname)!=1) break;
    
        struct element *e;
        if (last == NULL)
        {
            e = (struct element *) malloc(sizeof(struct element));
            first = e;
        }
        else e->prev = last;
    
        e->next = NULL;
        last = e;

        strcpy(e->lastname, lastname);
        for (int i = 0; i < num_marks; i++)
            e->mark[i] = mark_min + rand() % (mark_max - mark_min + 1);
    }

    fclose(f);

    struct element *current = first;
    while (current != NULL)
    {
        printf("%s", current->lastname);
        for (int i = 0; i < num_marks; i++)
            printf("%d", current->marks[i]);
        printf("\n");

        currnt = current->next;
    }

        struct element *current = last;
        while (current != NULL)
    {
        printf("%s", current->lastname);
        for (int i = 0; i < num_marks; i++)
            printf("%d", current->marks[i]);
        printf("\n");

        current = current->prev;
    }
    return 0;
}