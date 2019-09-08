#include <stdio.h>
#include <string.h>

struct month{
    char name[10];
    char abbrev[4];
    int days;
    int monumb;
};

struct month months[12] =
{
    { "January", "jan", 31, 1 },
    { "February", "feb", 28, 2 },
    { "March", "mar", 31, 3 },
    { "April", "apr", 30, 4 },
    { "May", "may", 31, 5 },
    { "June", "jun", 30, 6 },
    { "July", "jul", 31, 7 },
    { "Augest", "aug", 31, 8 },
    { "September", "sep", 30, 9 },
    { "October", "oct", 31, 10 },
    { "November", "nov", 30, 11 },
    { "December", "dec", 31, 12 }
};

int days(char *name);

int main(void)
{
    char name[10] = {0};

    printf("Please enter a month name:\n");
    scanf("%s", name);
    printf("Form Jan to %s : %d days\n", name, days(name));

    return 0;
}


int days(char *name)
{
    int index, total = 0;

    for (index = 0; index < 12; index++)
    {
        total += months[index].days;
        if (!strcmp(months[index].name, name))
            return(total);
    }
    return(-1);
}
