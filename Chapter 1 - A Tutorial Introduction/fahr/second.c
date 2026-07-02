#include <stdio.h>

#define LOWER	0
#define STEPS	20
#define UPPER	300

int	main(void)
{
	int fahr, celsius;

	fahr = LOWER;
	while (fahr <= UPPER)
	{
		celsius = 5.0 / 9.0  * (fahr - 32);
		printf("%6d\t%6d\n", fahr, celsius);
		fahr = fahr + STEPS;
	}
	return (0);
}
	

