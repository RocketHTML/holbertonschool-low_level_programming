#include <stdio.h>
#include "holberton.h"

/**
 * print_buffer - prints characters from a buffer in specific format
 * @b: pointer to content to be printed
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int offset = 0;
	int offset_hex = 0;
	int offset_char = 0;
	int count = 0;

	while (size > offset)
	{
		printf("%08x: ", offset);
		for (count = 1; count <= 15; count++)
		{
			if (count % 3 == 0)
			{
				putchar(' ');
				continue;
			}
			if (offset_hex >= size)
				printf("  ");
			else if (b[offset_hex] > 31)
				printf("%02x", b[offset_hex]);
			else if (b[offset_hex] < 32 && b[offset_hex] < 10)
				printf("00");
			else
				printf("0a");
			offset_hex++;
		}
		for (count = 0; count < 10; count++)
		{
			if (offset_char >= size)
				break;
			else if (b[offset_char] > 31)
				putchar(b[offset_char]);
			else if (b[offset_char] < 31)
				putchar('.');
			offset_char++;
		}
		putchar('\n');
		offset += 10;
	}
	if (size <= 0)
		putchar('\n');
}
