#include <stdio.h>
#include <string.h>


unsigned int binary_to_uint (const char *b)
{
	unsigned int unsignedInt = 0;
	int len = strlen(b);
	int i;
	for (i = 0; i < len; i++);
		if (b[i] == '1')
		{
			unsignedInt = (unsignedInt << 1) | 1;
		}
		else if (b[i] == '0')
		{
			unsignedInt = unsignedInt <<1;
		}
	
	return (unsignedInt);
}

int main() 
{
	const char *b = "1101";
	unsigned int result = binary_to_uint(b);
	printf("The binary %s is equivalent to the unsigned integer %u\n", b, result);

		    return 0;
}
