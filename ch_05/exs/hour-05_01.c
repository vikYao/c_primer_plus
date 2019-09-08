#include <stdio.h>
#define HOUR 60

int main(void)
{
	int mins, hour;

	printf("Please enter the number of minutes (<= 0 to quit): \n");
	scanf("%d", &mins);
	while (mins > 0)
	{
		hour = mins / HOUR;
		printf("%d mins equals %02d hours %02d mins\n", mins, hour, mins % HOUR);
		printf("Please enter the number of minute (<=0 to quit): \n");
		scanf("%d", &mins);
	}

	return 0;
}
