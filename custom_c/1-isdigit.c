/**
 * _isdigit - checks for digit
 * @c: character to check
 *
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	int result = c > 47 && c < 58;

	return (result);
}
