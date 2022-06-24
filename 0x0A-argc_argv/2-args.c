#include <stdio.h>

/**
 * main - prints out all arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: returns an int
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
