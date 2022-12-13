#include <stdio.h>
/**
 * main - prints numbers and alphabets in base 16
 *
 * Return: 0.
 */
int main(void)
{	int n;
	char alphabet;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);
	putchar('\n');

	return (0);
}
