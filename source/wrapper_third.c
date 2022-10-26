/*
** EPITECH PROJECT, 2022
** my printf
** File description:
** third wrapper
*/

#include "../include/my.h"

int wrapper_print_non_printable(va_list ap)
{
    char *str = va_arg(ap, char *);

    return my_print_non_printable(str);
}
