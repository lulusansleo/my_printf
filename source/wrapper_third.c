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
