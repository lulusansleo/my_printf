/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** do_flags
*/

#include "../include/my.h"

int do_hex_hash(long int nb, check_flags_t *flags)
{
    if (nb != 0 && flags->hash) {
        write(1, "0x", 2);
        return 2;
    }
    return 0;
}

int do_hex_hash_maj(long int nb, check_flags_t *flags)
{
    if (nb != 0 && flags->hash) {
        write(1, "0X", 2);
        return 2;
    }
    return 0;
}

int do_oct_hash(long int nb, check_flags_t *flags)
{
    if (nb != 0 && flags->hash) {
        write(1, "0", 1);
        return 1;
    }
    return 0;
}

int do_empty_int(long int nb, check_flags_t *flags)
{
    if (nb > 0) {
        if (flags->plus) {
            write(1, "+", 1);
            return 1;
        }
        if (flags->empty) {
            write(1, " ", 1);
            return 1;
        }
    }
    return 0;
}
