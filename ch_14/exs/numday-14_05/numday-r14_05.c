#include <stdio.h>

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

int days(int month);

int main(void)
{
    int month = 0;

    printf("Please enter a month number:\n");
    scanf("%d", &month);
    printf("Form Jan to %s : %d days\n", months[month - 1].name, days(month));

    return 0;
}


int days(int month)
{
    int index, total;
    if (month < 1 || month > 12)
        return(-1);
    else
    {
        for (index = 0, total = 0; index < month; index++)
            total += months[index].days;
        return(total);
    }
}
