#include <stdio.h>
#include <stdlib.h>

double min(double a, double b);

int main(void)
{
	double x, y;

	printf("Please enter a pair of doubles (q to quit):\n");
	while (scanf("%lf %lf", &x, &y) == 2)
	{
		printf("The lesser of %lf and %lf is %lf.\n", x, y, min(x, y));
		printf("Please enter a pair of doubles (q to quit):\n");
	}
	printf("Bye.\n");

	return 0;
}

double min(double x, double y)
{
	return (x < y) ? x : y;

}



