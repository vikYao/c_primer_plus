#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE   45

struct film {
    char title[TSIZE];
    int rating;
    struct film *next, *prior;
};
char * s_gets(char * str, int n);

int main(void)
{
    struct film *head, *tail;
    struct film *prev, *current;
    char input[TSIZE];

    head = tail = NULL;

    puts("Enter first movie title:");
    while (s_gets(input, TSIZE) != NULL && input[0] != '\0')
    {
        current = (struct film *) malloc(sizeof(struct film));
        tail = current;
        if (head == NULL)
        {
            head = current;
            current->prior = NULL;
        }
        else
        {
            prev->next = current;
            current->prior = prev;
        }
        current->next = NULL;
        strcpy(current->title, input);
        puts("Enter your rating <0-10>:");
        scanf("%d", &current->rating);
        while (getchar() != '\n')
            continue;
        puts("Enter next movie title (empty line to stop):");
        prev = current;
    }
    #if 0       // forward show
    if (head == NULL)
        printf("No data entered. ");
    else
        printf("Here is the movie list:\n");
    current = head;
    while (current != NULL)
    {
        printf("Movie: %s Rating: %d\n",
            current->title, current->rating);
        current = current->next;
    }
    #endif

    if (tail == NULL)
        printf("No data entered. ");
    else
        printf("Here is the movie list:\n");
    current = tail;
    while (current != NULL)
    {
        printf("Movie: %s Rating: %d\n",
            current->title, current->rating);
        current = current->prior;
    }

    current = head;
    while (head != NULL)    // 勘误 while (current != NULL) --- free(NULL)
    {
        current = head;
        head = current->next;
        free(current);
    }
    printf("Bye!\n");

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}
