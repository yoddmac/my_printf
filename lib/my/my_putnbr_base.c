/*
** EPITECH PROJECT, 2019
** disp
** File description:
** disp
*/

int my_putnbr_bin(int nb)
{
    int r = 0;

    if (nb >= 2) {
        r = nb % 2;
        nb = nb / 2;
        my_putnbr_bin(nb);
    }
    else if (nb > 0) { 
        r = nb % 2;
        nb = nb/ 2;
    }
    my_putchar(r + '0');
    return (r);
}

int my_putnbr_hex(int nb)
{
    int r = 0;

    if (nb >= 16) {
        r = nb % 16;
        nb = nb / 16;
        my_putnbr_hex(nb);
    }
    else if (nb > 0) {
        r = nb % 16;
        nb = nb / 16;
    }
    if (r > 9)
        my_putchar(r + 87);
    else {
        my_putchar(r + 48);
    }
}

int my_putnbr_capit_hex(int nb)
{
    int r = 0;

    if (nb >= 16) {
        r = nb % 16;
        nb = nb / 16;
        my_putnbr_hex(nb);
    }
    else if (nb > 0) {
        r = nb % 16;
        nb = nb / 16;
    }
    if (r > 9)
        my_putchar(r + 55);
    else {
        my_putchar(r + 48);
    }
}

int my_putnbr_oct(int nb)
{
    int r = 0;

    if (nb >= 8) {
        r = nb % 8;
        nb = nb / 8;
        my_putnbr_oct(nb);
    }
    else if (nb > 0) {
        r = nb % 8;
        nb = nb / 8;
    }
    my_putchar(r + '0');
    return (r);
}