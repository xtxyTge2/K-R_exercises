#include <stdio.h>

int main()
{
	bool value = getchar() != EOF;
	printf("The expression <<getchar() != EOF>> evaluates to: %d\n", value);
	return 0;
}