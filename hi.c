#include <stdio.h>
#include "0x05-pointers_arrays_strings/holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(p + 5) = 98;
  /* ...so that this prints 98\n */
  printf("&p    = %p\n", &p);
  printf("size: %lu\n", sizeof(p));
  printf("&a[2] - &n = %lu\n\n", (&a[2] - &n));
  
  printf("&a[0] = %p\n", &a[0]);
  printf("size: %lu\n\n", sizeof(a));
  printf("&a[2] = %p\n", &a[2]);
  printf("size: %lu\n\n", sizeof(a[2]));
  printf("&a[4] = %p\n", &a[4]);
  printf("size: %lu\n\n", sizeof(a[4]));
  printf("&n    = %p\n", &n);
  printf("size: %lu\n\n", sizeof(n));
  printf("a[2] = %d\n", a[2]);
  return (0);
}
