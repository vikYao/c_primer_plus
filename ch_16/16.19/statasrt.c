#include <stdio.h>
#include <limits.h>
_Static_assert(CHAR_BIT == 16, "16-bit char falsely assumed");  // 编译时检查表达式，无法通过编译
int main(void)
{
	puts("char is 16 bits.");
	return 0;
}
