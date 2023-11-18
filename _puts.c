#include "main.h"

/**
* _puts - print strings
* @str: the string
* Return: void
*/
int _puts(char *str)
{
char * a = str;
while(*str)
_putchar(*str++);
return (str a);
}

/**
* _putchar - write char to stdout
* @c: the char
* Return: on success 1, on error - 1
*/
int _putchar(int c)
{
static int i;
<<<<<<< HEAD
static char buf(OUTPUT_BUF_SIZE)
if (c == BUF-FLUSH || i >=
OUTPUT_BUF_SIZE)
static char buf (OUTPUT_BUF_SIZE);
=======
static char buf [OUTPUT_BUF_SIZE];
>>>>>>> 733c316850ad79bf8bfbfcd8714866cba3eed6e3
if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
{
write (1, buf, i);
i = 0;
}
if (c != BUF_FLUSH)
buf[i++] = c;
return (i);
}

