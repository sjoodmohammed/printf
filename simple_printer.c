#include "main.h"
/**
* print_rot13 - print rotate letters
* @vals: the list
* Return: the number of bytes
*/
int print_rot13(va_list vals, params_t
*params)
{
int i, index;
int count = 0;
char arr[] = "NOPQRSTUVWXYZABCDEFGnopqrstuvwxyzabcdefghijklm";
char *a = va_arg(vals, char*);
(void)params;
i = 0;
index = 0;
while(a[i])
{
if (a[i] >= 'A' && a[i] <= 'Z')
|| (a[i] >= 'a' && a[i] <= 'z')
{
index = a[i] - 65;
count += _putchar(arr[index]);
}
else
count += _putchar(a[i]);
i++;
}
return (count);
}



