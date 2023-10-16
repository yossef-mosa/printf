#include "main.h"
int print_i(int value)
{
char buffer[32];
int printed = snprintf(buffer, sizeof(buffer), "%d", value);
for (int i = 0; i < printed; i++)
{
putchar(buffer[i]);
}
return printed;
}

void print_b(char buffer[], int *buff_ind)
{
if (*buff_ind > 0)
{
for (int i = 0; i < *buff_ind; i++)
{
putchar(buffer[i]);
}
}

*buff_ind = 0;
}
