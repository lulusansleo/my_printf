/*
** EPITECH PROJECT, 2022
** wrapper for miniprintf
** File description:
** only void
*/

#include "../include/my.h"

int my_nb_len(long int nb)
{
    int i;

    if (nb > 0) {
        for (i = 1; nb > 9; ++i) {
            nb = nb / 10;
        }
    } else {
        for (i = 1; nb < -9; ++i) {
            nb = nb / 10;
        }
        i += 1;
    }
    return i;
}

int my_nb_len_base(long int nb, char *base)
{

    int i;
    int len = my_strlen(base);

    if (nb > 0) {
        for (i = 1; nb > len; ++i) {
            nb = nb / len;
        }
    } else {
        for (i = 1; nb < -len; ++i) {
            nb = nb / len;
        }
        i += 1;
    }
    return i;
}

int wrapper_my_putstr(va_list ap)
{
    return my_putstr(va_arg(ap, char *));
}

int wrapper_my_putchar(va_list ap)
{
    return my_putchar(va_arg(ap, int));
}

int wrapper_my_put_nbr(va_list ap)
{
    int nb = va_arg(ap, int);

    my_put_nbr(nb);
    return my_nb_len(nb);
}
