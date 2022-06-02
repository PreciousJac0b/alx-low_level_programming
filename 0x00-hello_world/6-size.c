#include <stdio.h>

/**
 * main - Entry point
 * the size of data types might vary based on if the computer is 32 bits or 64bits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char data type: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int data type: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int data type: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int data type: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float data type: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
