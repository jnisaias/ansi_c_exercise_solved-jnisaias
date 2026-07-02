#include <stdio.h>

#define LOWER	0
#define STEPS	20
#define UPPER	300

int	main(void)
{
	float fahr, celsius;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEPS)
	{
		celsius = 5.0 / 9.0 * (fahr - 32);
		printf("%.2f\t%.2f\n", fahr, celsius);
	}
	return (0);
}
