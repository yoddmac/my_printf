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

int my_putnbr_bin(int nb);
int my_putnbr_hex(int nb);
int my_putnbr_capit_hex(int nb);
int my_putnbr_oct(int nb);
int my_putnbr_point(long int p);
int my_strlen(char const *str);
int my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
void print_char(va_list ap);
void print_string(va_list ap);
void print_nbr(va_list ap);
void print_nbr_i(va_list ap);
void my_put_nbr_binaire(va_list ap);
void my_put_nbr_hexa(va_list ap);
void my_put_nbr_capitahex(va_list ap);
void my_put_nbr_oct(va_list ap);
void my_put_pourcent(va_list ap);
void my_put_point(va_list ap);

typedef struct flag_s{
    char flags;
    void (*ptr_flags)(va_list);
} flag_t;

static const flag_t tab[] = {
    {'c', &print_char},
    {'s', &print_string},
    {'d', &print_nbr},
    {'i', &print_nbr_i},
    {'b', &my_put_nbr_binaire},
    {'x', &my_put_nbr_hexa},
    {'X', &my_put_nbr_capitahex},
    {'o', &my_put_nbr_oct},
    {'%', &my_put_pourcent},
    {'p', &my_put_point},
    {'\0', NULL}
};

#endif