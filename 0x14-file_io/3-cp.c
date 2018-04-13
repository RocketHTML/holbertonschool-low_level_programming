#include "holberton.h"

int main (int argc, char **argv)
{
	char *err97 = "97\n";
	char *err98 = "98 ";
	char *err99 = "99 ";
	char *err100 = "100\n";
	int not_done = 1, one, two, c, d;
	char buf[1024];
	
	if (argc != 3)
	{
		/* error */
	}

	one = open(argv[1], O_RDONLY);
	if (one == -1)
	{
		/* error */
	}

	two = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT | O_APPEND,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (two == -1)
	{
		/* error */
	}
	while (not_done)
	{
		c = read(one, buf, 1024);
		if (c == -1)
		{
			/* error */
		}
		if (c < 1024)
		{
			buf[c] = '\0';
			not_done = 0;
			c++;
		}
		d = write(two, buf, c);
		if (d == -1 || d != c)
		{
			/* error */
		}
	}
	c = close(one);
	d = close(two);
	if (c == -1 || d == -1)
	{
		/* error */
	}
	return (0);
}
