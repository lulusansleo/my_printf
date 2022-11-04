/*
** EPITECH PROJECT, 2022
** wrapper for miniprintf
** File description:
** only void
*/

#include "../include/my.h"

int my_nb_len(long long int nb)
{
    int i = 0;
    int minus = 0;

    if (nb < 0) {
        nb = -nb;
        minus = 1;
    }
    if (nb > 0) {
        for (i = 1; nb > 9; ++i) {
            nb = nb / 10;
        }
    } else {
        for (i = 1; nb < -9; ++i) {
            nb = nb / 10;
            i += 1;
        }
    }
    return i + minus;
}

int my_nb_len_base(long long int nb, char *base)
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
            i += 1;
        }
    }
    return i;
}

int wrapper_my_putstr(va_list ap, check_flags_t *flags)
{
    int count = 0;
    char *str = va_arg(ap, char *);
    char cpy[my_strlen(str)];
    int diff = 0;

    my_strcpy(cpy, str);
    count = precision_str(str, cpy, count, flags);
    diff = flags->min - count;
    if (diff > 0 && !flags->minus) {
        print_pads(' ', diff);
        count += diff;
    }
    my_putstr(cpy);
    if (diff > 0 && flags->minus) {
        print_pads(' ', diff);
        count += diff;
    }
    return count;
}

int wrapper_my_putchar(va_list ap, check_flags_t *flags)
{
    char c = va_arg(ap, int);
    int count = 1;
    int diff = 0;

    diff = flags->min -count;
    if (diff > 0 && !flags->minus) {
        print_pads(' ', diff);
        count += diff;
    }
    if (count)
        write(1, &c, 1);
    if (diff > 0 && flags->minus) {
        print_pads(' ', diff);
        count += diff;
    }
    return count;
}

int wrapper_my_put_nbr(va_list ap, check_flags_t *flags)
{
    int_len_t nb;
    if (flags->conversion == 'y')
        nb.long_longy = (long long) va_arg(ap, int);
    if (flags->conversion == 'l')
        nb.longy = va_arg(ap, long);
    if (flags->conversion == 'z')
        nb.sizy = va_arg(ap, size_t);
    if (flags->conversion == 'h')
        nb.shorty = (short) va_arg(ap, int);
    if (flags->conversion == 'j')
        nb.maxy = va_arg(ap, __intmax_t);
    if (flags->conversion == 'H')
        nb.chary = va_arg(ap, signed );
    if (flags->conversion == '0')
        nb.inty = va_arg(ap, int);
    return do_my_put_nbr(nb.long_longy, flags);
}
