/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** add len with flag modifiers
*/

#include "../include/my.h"

int do_hex_len(long int nb, check_flags_t *flags)
{
    if (nb != 0 && flags->hash)
        return 2;
    return 0;
}

int do_oct_len(long int nb, check_flags_t *flags)
{
    if (nb != 0 && flags->hash)
        return 1;
    return 0;
}

int do_empty_len(long int nb, check_flags_t *flags)
{
    if (nb > 0) {
        if (flags->plus)
            return 1;
        if (flags->empty)
            return 1;
    }
    return 0;
}

int count_with_precision(check_flags_t *flags, int nb, char *base, int count)
{
    if (flags->max > my_nb_len(nb))
        count += flags->max;
    else
        count += my_nb_len(nb);
    return count;
}

int precision_str(char *str, char *cpy, int count, check_flags_t *flags)
{
    if (flags->max < my_strlen(str) && flags->precison) {
        count = flags->max;
        cpy[flags->max] = '\0';
    } else
        count += my_strlen(str);
    return count;
}
