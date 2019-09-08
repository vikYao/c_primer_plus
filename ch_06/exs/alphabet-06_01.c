#include <stdio.h>

int main(void)
{
    char alpha[26] = {0};
    char ch;
    int index;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        index = ch - 'a';
        alpha[index] = ch;
    }

    for (index = 0; index < 26; index++)
    {
        if (0 == index)
        {
            printf("[%c", alpha[index]);
            continue;
        }
        printf(" %c", alpha[index]);
    }
    printf("]\n");


    return 0;
}
