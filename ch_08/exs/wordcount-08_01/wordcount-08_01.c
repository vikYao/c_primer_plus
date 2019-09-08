#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int count = 0;
	FILE *fp;
	char *fname, ch;

	
	if (argc < 2)
		printf("Usage: %s file_name\n", argv[0]);
	fname = argv[1];
	fp = fopen(fname, "r");
	if (fp == NULL)
	{
		printf("Failed to open file. Bye\n");
		exit(1);
	}
	while ((ch = getc(fp)) != EOF)
	{
		count++;
		putc(ch, stdout);
	}
	printf("============================\n");
	printf("%d %s\n", count, fname);

	fclose(fp);

	return 0;
}
