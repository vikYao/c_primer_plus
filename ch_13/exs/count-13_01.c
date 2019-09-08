#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int ch;
    FILE *fp;
    unsigned long count = 0;

    char fname[255] = {0};
    printf("Please enter a file name:\n");
    if ((scanf("%s", fname) == 1) && ((fp = fopen(fname, "r")) == NULL))
    {
        printf("Can't open %s\n", fname);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters\n", fname, count);

    return 0;
}
