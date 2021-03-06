#include <stdio.h>
#include <math.h>
/**
 * main - find the greates prime factor of 612852475143
 * @void: doesn't recive any parameter
 * Return: 0 - 1 or -1
 */
int main(void)
{
	unsigned long int n;
	int i;

	n = 612852475143;

	while (n % 2 == 0)
	{
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}

	if (n > 2)
	{
		printf("%lu\n", n);
	}
	else
	{
		printf("%d\n", 2);
	}
	return (0);
}
