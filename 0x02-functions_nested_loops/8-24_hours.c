#include <stdio.h>

void jack_bauer(void);
/**
 * main - Entry point
 * Des: main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	jack_bauer();
	return (0);
}

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			printf("%02d:%02d\n", i, j);
		}
	}
}
