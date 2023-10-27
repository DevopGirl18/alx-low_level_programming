#include "main.h"

/**
 * binary_to_uint - changes binary to unsigned integer.
 * unsigned int n - integer parameter.
 * @b - binary variable.
 *
 * Return: unsigned int.
 **/

unsigned int binary_to_uint(const char *b)
{
       unsigned int n;
       int len;
       int base_two;

       if (!b)
	       return (0);

       n = 0;
       for (len = 0; b[len] != '\0'; len++);

       for (len--; base_two = 1; len >= 0; len--; base_two *= 2)
       {
	       if (b[len] != '0' && b[len] != '1')
	       {
		       return (0);
	       }
	       
	       if (b[len] & 1)
	       {
		       n += base_two;
	       }
	        
       }

       return (n);
}
