#include <stdio.h>

#define H_MEAN(X, Y) (1 / (((1 / (X)) + (1 / (Y))) / 2))

int main(void)
{
	printf("%lf\n", H_MEAN(2.0, 4.0));
	printf("%lf\n", H_MEAN(2.0, 3.0));

	return 0;
}
