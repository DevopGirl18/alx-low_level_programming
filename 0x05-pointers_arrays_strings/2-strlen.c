/*
 * File: 2-strlen.c
 * Auth: Igweneme Chidiogo
 */

#include "main.h"

/**
 * _strlen - writes the length of a string
 * @s: input string.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;
	return (length);
}
