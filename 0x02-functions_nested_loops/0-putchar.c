#include <stdio.h>
#include <unistd.h>

/**
 * main - Check description
 * Description: It prints the word Rabiu, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char word[5] = "Rabiu";
	int i;

	for (i = 0; i < 5; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
