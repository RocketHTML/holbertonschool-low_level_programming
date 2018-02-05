/**
 * set_string - resets a pointer to a different string
 * @s: pointer to pointer being reset
 * @to: pointer to new string
 */
void set_string(char **s, char *to)
{
	*s = to;
}
