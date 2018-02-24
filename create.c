#include <stdio.h>

void ctemplate(char *s)
{
  printf("#include <stdarg.h>\n");
  printf("/**\n *\n *\n *\n * Return:\n */\n");
  printf("%s\n{\n\n\treturn (0);\n}\n", s);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		ctemplate(argv[1]);
	else
		return (1);
    return (0);
}
