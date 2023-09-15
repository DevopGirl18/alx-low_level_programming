#include "main.h"
#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, Fp;

	n = 612852475143;
	for (Fp = 2; Fp <= n; Fp++)
	{
		if (n % Fp == 0)
		{
			n /= Fp;
			Fp--;
		}
	}
	printf("%ld\n", Fp);
	return (0);
}
