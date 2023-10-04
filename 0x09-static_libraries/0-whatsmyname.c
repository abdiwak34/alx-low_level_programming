#include <stdio.h>
#include "main.h"

/**
 * main - print name
 * @argc: num arguments
 * @argv: arr arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
