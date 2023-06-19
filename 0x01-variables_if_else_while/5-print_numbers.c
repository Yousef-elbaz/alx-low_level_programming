#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	for (char num = '0'; num <= '9' ; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
