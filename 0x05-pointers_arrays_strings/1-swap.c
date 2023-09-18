/*
 * File: 1-swap.c
 * Auth: Igweneme Chidiogo
 */

#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer to be swaped with @b
 * @b: integer to be swaped with @a
 */

void swap_int(int *a, int *b)
{
	 int a;
         int b;

    a = H;
    b = P;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
