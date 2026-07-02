/* Write a program to print the corresponding Celsius to Fahrenheit table.*/

#include <stdio.h>

#define LOWER	0
#define STEPS	20
#define UPPER	300

int	main(void)
{
	int fahr, celsius;

	for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEPS)
	{
		fahr = 9 * celsius / 5 + 32;
		printf("%6d\t%6d\n", celsius, fahr);
	}
	return (0);
}
