/*
** EPITECH PROJECT, 2022
** my printf
** File description:
** third wrapper
*/

#include "../include/my.h"

int wrapper_print_non_printable(va_list ap, check_flags_t *flags)
{
    char *str = va_arg(ap, char *);

    return my_print_non_printable(str);
}

int wrapper_print_pointer(va_list ap, check_flags_t *flags)
{
    flags->hash = 1;
    return wrapper_my_put_nbr_hexa(ap, flags);
}

int wrapper_float(va_list ap, check_flags_t *flags)
{
    double nb = va_arg(ap, double);
    int ret;

    if (flags->precison)
        ret = my_put_float(nb, flags->max);
    else
        ret = my_put_float(nb, 6);
    return ret;
}

int wrapper_point(va_list ap, check_flags_t *flags)
{
    int *ptr = va_arg(ap, int *);

    *ptr = flags->count;
    return 0;
}
