#include <stdio.h>

void print_returntype(char *s)
{
  int i;

  for (i = 0; s[i] != ' '; i++)
  {
     putchar(s[i]);
  }

}

char *print_param(char *s)
{
  char *ss = s;
  char *a = " array";
  int isarray = 0;
  int i;
  int ret;

  for (i = 0; s[i] != ' '; i++)
  {}
  i++;

  if (s[i] == '*')
  {
    isarray++;
    i++;
  }
  putchar('@');
  for (; s[i] != ',' && s[i] != ')'; i++)
    putchar(s[i]);

  ret = i;

  putchar(':');
  putchar(' ');

  for (i = 0; s[i] != ' '; i++)
    putchar(s[i]);

  if (isarray)
    printf("%s", a);

  return (s + ret);
}

void print_params(char *s, int j)
{
  char *p = (s + j + 1);

  if (*p == ')')
    return;

  while(1)
  {
    printf(" * ");
    p = print_param(p);
    putchar('\n');
    if(*p == ')')
      break;
    p += 2;
  }

}

void ctemplate(char *s)
{
  int i;
  char *p;
  
  for (i = 0; s[i] != ' '; i++)
  {}
  i++;
  printf("#include \"holberton.h\"\n\n");
  printf("/**\n * ");
  for (; s[i] != '('; i++)
  {
    putchar(s[i]);
  }
  printf(" - returns ");
  print_returntype(s);
  putchar('\n');
  print_params(s, i);
  printf(" * Return: ");
  print_returntype(s);
  printf("\n */\n");

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
