#include <stdio.h>
#include <stdlib.h>

char *getnch(int number);
void print(char ar[], int number);

int main(void)
{
	int n = 10;
	char *ch = NULL;

	ch = getnch(n);
	print(ch, n);

	return 0;
}


char *getnch(int number)
{
	char *ch = (char *)malloc(number * sizeof(char));
	int i;

	for (i = 0; i < number; i++)
		ch[i] = getchar();

	return ch;
}

void print(char ar[], int number)
{
	int i;
	for (i = 0; i < number; i++)
		printf("char[%d] : %c -- %d\n", i, ar[i], ar[i]);
}
