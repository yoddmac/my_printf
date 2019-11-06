/*
** EPITECH PROJECT, 2019
** disp
** File description:
** disp
*/

int my_strlen (char const *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++);
        return (i);
}
