#include <stdio.h>

int main(void)
{
	char ch;
	int count = 0;

	printf("Please enter characters (# to quit):\n");
	while ((ch = getchar()) != '#')
		count++;

	printf("You have entered %d characters\n", count);

	return 0;
}
