#include "main.h"

/**
*main - print out main char by char
*Description: uses the main header file
*that contains the function _putchar
*Return: Always 0
*/
int main(void)
{
char str[] = "_putchar";
int i;

i = 0;
while (str[i])
{
_putchar(str[i]);
++i;
}
_putchar('\n');

return (0);
}
