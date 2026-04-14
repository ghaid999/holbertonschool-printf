#include "main.h"

/**
 * _printf - prints characters from format
 * @format: string to print
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i;
	int count;

	if (format == NULL)
		return (-1);

	i = 0;
	count = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}

	return (count);
}
