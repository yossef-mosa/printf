#include"main.h"

/**
 * print_char - ...
 * @pa: pointer to argument
 * Return: int
 */

int print_char(va_list pa)
{
char x;

x = va_arg(pa, int);
_putchar(x);
return (1);
}

/**
 * print_string - ...
 * @pa: pointer to argument
 * Return: counter
 */

int print_string(va_list pa)
{
char *str;
int i = 0;

str = va_arg(pa, char *);

if (str == NULL)
str = "(null)";

while (str[i])
{
_putchar(str[i]);
i++;
}

return (i);
}

/**
 * print_percentage - ...
 * @pa: pointer to argument
 * Return: nothing
 */

int print_percentage(va_list pa)
{
(void) pa;
_putchar('%');
return (1);
}

/**
 * _printf - work as printf function
 * @format: pointer to argument
 * @...: ...
 * Return: (int)
 */

int _printf(const char *format, ...)
{
va_list pa;
int i = 0, count = 0;

va_start(pa, format);


if (format == NULL)
return (-1);

while (format[i])
{
if (format[i] != '%')
{
_putchar(format[i]);
count++;
}
else
{
switch (format[i + 1])
{
case 'c':
count += print_char(pa);
break;
case 's':
count += print_string(pa);
break;
case '%':
count += print_percentage(pa);
break;
default:
return (-1);
}
i++;
}
i++;
}

va_end(pa);
return (count);
}
