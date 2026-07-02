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
		celsius = 5 * (fahr - 32) / 9;	
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + STEPS;
	}
	return (0);
}
