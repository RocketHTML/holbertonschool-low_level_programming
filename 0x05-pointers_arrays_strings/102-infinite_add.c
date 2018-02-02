#include "holberton.h"

/**
 * clear_buffer - zero's out a buffer
 * @buffer: buffer to be zero'd out
 * @size_r: size of buffer
 */
void clear_buffer(char *buffer, int size_r)
{
	int i;

	for (i = 0; i < size_r - 1; i++)
	{
		buffer[i] = 'x';
	}
	buffer[i] = '\0';
}

/**
 * one_place - return index of one's place
 * @n: pointer to character representation of a number
 *
 * Return: returns index of one's place
 */
int one_place(char *n)
{
	int i = 0;

	while (n[i] != '\0')
		i++;
	i--;
	return (i);
}

/**
 * infinite_add - adds two integers
 * @n1: first integer
 * @n2: second integer
 * @r: buffer to store result of addition
 * @size_r: size allotted for result
 * Return: 0 if result is beyond size_r, pointer to result otherwise
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = one_place(n1);
	int j = one_place(n2);
	int k = size_r - 2;
	int carry = 0;
	int a;
	int b;
	int c;

	clear_buffer(r, size_r);
	while ((i >= 0 || j >= 0) || carry)
	{
		a = 0;
		b = 0;
		c = 0;
		if (carry)
			c = 1;
		if (i >= 0)
			a = n1[i] - '0';
		if (j >= 0)
			b = n2[j] - '0';
		c += a + b;
		if (c >= 10)
			carry = 1;
		else
			carry = 0;
		if ((carry && k == 0) || k < 0)
		{
			return (0);
		}
		r[k] = (c % 10) + '0';
		k--;
		i--;
		j--;
	}
	i = 0;
	k++;
	while (r[k] != '\0')
		r[i++] = r[k++];
	r[i] = r[k];
	return (r);
}
