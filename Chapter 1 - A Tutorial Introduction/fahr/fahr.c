#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300*/

int	main(void)
{
	int fahr, celsius;
	int lower, upper, steps;

	lower = 0;
	steps = 20;
	upper = 300;

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + steps;
	}
	return (0);
}
