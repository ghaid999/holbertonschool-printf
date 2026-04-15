#include "main.h"

/* helper function */
int print_int_helper(int n)
{
	int count = 0;
	char c;

	if (n / 10)
		count += print_int_helper(n / 10);

	c = (n % 10) + '0';
	write(1, &c, 1);
	count++;

	return (count);
}

/* print integer */
int print_int(va_list args)
{
	int n;
	int count = 0;

	n = va_arg(args, int);

	/* handle INT_MIN */
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		n = -n;
	}

	count += print_int_helper(n);

	return (count);
}
