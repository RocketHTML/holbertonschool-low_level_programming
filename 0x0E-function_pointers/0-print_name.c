/**
 * print_name - returns void
 * @name: char array
 * @f: function that returns void and takes char array
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
