#include <stdio.h>

/**
 * main - function
 * @argc: offset count
 * @argv: offset values
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
