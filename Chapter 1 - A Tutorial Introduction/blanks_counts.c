/* Write a program to count blanks, tabs, and newlines. */

#include <stdio.h>

int	main(void)
{
	int	c;
	int counter[2];

	for (int i = 0; i < 3; i++)
		counter[i] = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++counter[0];
		else if (c == '\t')
			++counter[1];
		else if (c == '\n')
			++counter[2];
	}
	for (int i = 0; i < 3; i++)
		printf("White space: %d, Tabs: %d, Newlines: %d\n", counter);
	return (0);
}
