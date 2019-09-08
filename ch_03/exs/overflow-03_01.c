#include <stdio.h>
#include <float.h>

int main(void)
{
    printf("----------- integer overflow -----------\n");
    int i = 2147483647;             // 2^31 - 1
    unsigned int j = 4294967295;    // 2^32 - 1
    printf("%-15d %-15d %-15d\n", i, i+1, i+2);
    printf("%-15u %-15u %-15u\n", j, j+1, j+2);

    printf("----------- float overflow -----------\n");
    float f = 3.4E38;
    printf("%e, %e\n", f, f * 2.0f);
    
    printf("----------- float underflow -----------\n");
    float fmin = FLT_MIN;
    printf("%e\n", fmin);
    int n;
    for (n = 0; n < 15; n++)
    {
        fmin = fmin / 10.0f;
        printf("%e\n", fmin);
    }

    return 0;
}
