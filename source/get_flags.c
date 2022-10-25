/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** get_flags
*/

#include "../include/my.h"

check_flags_t flags_reset(check_flags_t *flags)
{
    flags->empty = 0;
    flags->hash = 0;
    flags->max = 0;
    flags->min = 0;
    flags->minus = 0;
    flags->zero = 0;
    flags->plus = 0;
    flags->flag = NULL;
}

int is_format_flag(char c)
{
    char *str = "dscixXfeEgG%oupn";

    for (int i = 0; str[i] != '\n'; ++i)
        if (str[i] == c)
            return 1;
    return 0;
}

int what_flags(check_flags_t *flags, char *str, int i)
{
    while (!is_format_flag(str[i])) {
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
        i++;
    }
    printf("flag is %c\n", flags->flag);
    flags->flag = str[i];
    return i;
}
