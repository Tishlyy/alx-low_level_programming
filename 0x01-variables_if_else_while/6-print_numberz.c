#include <stdio.h>
/**
 * main - main block
 * Description: print all single digits of base 10
 * starting from 0, followed by new line
 * Return: 0
 */
int main(void)
{
	int i = 0;
while (i < 10)
{
	putchar(48 + i);
	i++;
}

putchar('\n');
return (0);
}
