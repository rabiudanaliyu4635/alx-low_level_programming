#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints the word Rabiu, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char word[9] = "Rabiu_Ali";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
