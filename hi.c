#include <stdio.h>
#include "0x05-pointers_arrays_strings/holberton.h"
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
  char *p;

  p = string_toupper(s);
  printf("%s", p);
  printf("%s", s);
  return (0);
}
