#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
int _putchar(char c);
int print_i(int value);
void print_b(char buffer[], int *buff_ind);

int _printf(const char *format, ...);
#define BUFF_SIZE 1024

#endif
