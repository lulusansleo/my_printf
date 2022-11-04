/*
** EPITECH PROJECT, 2022
** my printf
** File description:
** do print
*/

#include "../include/my.h"

int do_my_put_nbr(long long int nb, check_flags_t *flags)
{
    int count = do_empty_len(nb, flags);
    int diff;
    char pad = what_pad(flags);

    count = count_with_precision_decimal(flags, nb, count);
    diff = flags->min - count;
    if (diff > 0 && !flags->minus) {
        print_pads(pad, diff);
        count = flags->min;
    }
    do_empty_int(nb, flags);
    pad_number(flags, my_nb_len(nb));
    my_put_nbr(nb);
    if (diff > 0 && flags->minus) {
        print_pads(pad, diff);
        count = flags->min;
    }
    return count;
}
