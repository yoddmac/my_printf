/*
** EPITECH PROJECT, 2019
** printf
** File description:
** printf
*/

#include <stdarg.h>
#include "my.h"

int check_flags(char flag)
{
    for (int i = 0; tab[i].flags != '\0'; i++) {
        if (tab[i].flags == flag)
            return (i);
    }
    return (- 1);
}

int my_printf(char const *str, ...)
{
    va_list ap;
    int save = 0;

    va_start(ap, str);
    for(int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%') {
            i++;
            save = check_flags(str[i]);
            if (save != -1)
                tab[save].ptr_flags(ap);
        }
    }
    va_end(ap);
    return (0);
}

int main()
{
    my_printf("%s %c %d\n", "theo", 'c', 1);
}