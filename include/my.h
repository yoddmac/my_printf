/*
** EPITECH PROJECT, 2019
** disp
** File description:
** disp
*/

#ifndef MY_H_
#define MY_H_

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_strlen(char const *str);
int my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
void print_char(va_list *ap);
void print_string(va_list ap);
void print_nbr(va_list ap);

typedef struct flag_s{
    char flags;
    void (*ptr_flags)(va_list);
} flag_t;

static const flag_t tab[] = {
    {'c', &print_char},
    {'s', &print_string},
    {'d', &print_nbr},
    {'\0', NULL}
};

#endif