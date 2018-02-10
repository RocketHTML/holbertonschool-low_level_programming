/**
 * _print_rev_recursion - returns void
 * @s: char array
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == 0)
		return;
	
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
