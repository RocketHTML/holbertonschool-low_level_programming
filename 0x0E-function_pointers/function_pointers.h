#ifndef HEADER
#define HEADER
void _putchar(int x);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
