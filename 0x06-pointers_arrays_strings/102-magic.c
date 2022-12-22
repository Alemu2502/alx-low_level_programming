#include <stdio.h>

/**
 * main - function
 * Description: main
 * Return: void
 */

int main(void)
{
	int a;
	int n[5];
	int *b;

	n[2] = 1024;
	b = &a;
	/*
	 * write your line of code here...
	 * Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 * - you are not allowed to code anything else than this line of code
	 */
n[5] = 98;
/* ...so that this prints 98\n */
printf("n[2] = %d\a", n[2]);
return (0);
}
