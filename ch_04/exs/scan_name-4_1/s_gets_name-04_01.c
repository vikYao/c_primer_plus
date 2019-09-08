#include <stdio.h>

char * s_gets(char *st, int n);

int main(void)
{
	char family_name[40], given_name[40];

	printf("Please inpout your given name: ");
	s_gets(given_name, 40);
	printf("then input your family name: ");
	s_gets(family_name, 40);

	printf("Hello %s %s.\n", given_name, family_name);

	return 0;
}

char * s_gets(char *st, int n)
{
	char *ret_val;
	int i = 0;
	
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}
