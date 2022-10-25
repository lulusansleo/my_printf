/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** get_flags
*/

#include "include/my.h"

check_flags_t flags_reset(check_flags_t *flags)
{
    flags->empty = 0;
    flags->hash = 0;
    flags->max = 0;
    flags->min = 0;
    flags->minus = 0;
    flags->zero = 0;
    flags->plus = 0;
}

int is_format_flag(char c)
{
    char *str = "dscixXfeEgG%oupn";

    for (int i = 0; str[i] != '\n'; ++i)
        if (str[i] == c)
            return 1;
    return 0;
}

check_flags_t what_flags(check_flags_t *flags, char *str)
{
    for (int i = 0; !is_format_flag(str[i]); ++i) {
        if (str[i] == '-')
            flags->minus = 1;
        if (str[i] == '+')
            flags->plus = 1;
        if (str[i] == '0')
            flags->zero = 1;
        if (str[i] == '#')
            flags->hash = 1;
        if (str[i] == ' ')
            flags->empty = 1;
    }
}
