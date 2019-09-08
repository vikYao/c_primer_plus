#include <stdio.h>
#include <string.h>

int bstoi(char *);

int main(void)
{
	char * pbin = "01001001";
	
	printf("\"%s\" = %d\n", pbin, bstoi(pbin));
	
	return 0;
}

int bstoi(char *ch)
{
	int value = 0, i;
	int len = strlen(ch);

	for (i = 0; i < len; i++)
		value = value * 2 + (ch[i] - '0');

	return value;
}
