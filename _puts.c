#include "main.h"

**
 * _puts - prints a string
 * @str: points to the string to be printed
 * Return: void
*/

void _puts(char *str)
{
	int x = 0;
	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}
}
