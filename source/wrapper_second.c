/*
** EPITECH PROJECT, 2022
** wrapper
** File description:
** second file
*/

#include "../include/my.h"

int wrapper_my_put_nbr_hexa_m(va_list ap)
{
    long int nb = va_arg(ap, long int);
    char *base = "0123456789ABCDEF";

    my_put_nbr_base(nb, base);
    return my_nb_len_base(nb, base);
}

int wrapper_my_put_nbr_hexa(va_list ap)
{
    long int nb = va_arg(ap, long int);
    char *base = "0123456789abcdef";

    my_put_nbr_base(nb, base);
    return my_nb_len_base(nb, base);
}

int wrapper_my_put_nbr_octal(va_list ap)
{
    long int nb = va_arg(ap, long int);
    char *base = "01234567";

    my_put_nbr_base(nb, base);
    return my_nb_len_base(nb, base);
}

int wrapper_my_put_nbr_unsigned_int(va_list ap)
{
    unsigned int nb = va_arg(ap, unsigned int);
    char *base = "0123456789";

    my_put_nbr_base(nb, base);
    return my_nb_len_base(nb, base);
}

int wrapper_my_put_b(va_list ap)
{
    unsigned int nb = va_arg(ap, unsigned int);
    char *base = "01";

    my_put_nbr_base(nb, base);
    return my_nb_len_base(nb, base);
}
