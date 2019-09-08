#include <stdio.h>

int main(void)
{
	char family_name[40], given_name[40];

	printf("Please inpout your given name: ");
	scanf("%s", given_name);	// 只能读入单词
	printf("then input your family name: ");
	scanf("%s", family_name);

	printf("Hello %s %s.\n", given_name, family_name);

	return 0;
}
