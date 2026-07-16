#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** 
 * @brief The main entry point of the program.
 *
 * @return int Returns 0 on successful execution
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d\n is zero", n);
	}
	else
	{
		printf("%d\n is negative", n);
	}
	return (0);
}
