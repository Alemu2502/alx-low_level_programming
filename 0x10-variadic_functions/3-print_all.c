#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>




/**
 * print_char - print a character
 * @args: the arguments list
 */
void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}




/**
 * print_integer - prints an integer
 * @list: the argument list
 */
void print_integer(va_list list)
{
	printf("%d", va_arg(list, int));
}




/**
 * print_float - prints a float
 * @list: the argument list
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}




/**
 * print_string - prints a string
 * @list: the argument list
 */
void print_string(va_list list)
{
	char *str = va_arg(list, char *);

	if (!str)
		str = "(nil)";
	printf("%s", str);
}




/**
 * print_all - prints everything
 * @format: list a type of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	const char *form = format;
	char *sep = "";
	int i = 0, j;

	fh formaters[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(ap, format);

	while ((form && form[i]) != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (form[i] == (formaters + j)->format)
			{
				printf("%s", sep);
				(formaters + j)->printer(&ap);
				sep = " , ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
