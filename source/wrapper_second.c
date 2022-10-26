/*
** EPITECH PROJECT, 2022
** wrapper
** File description:
** second file
*/

#include "../include/my.h"

int wrapper_my_put_nbr_hexa_m(va_list ap, check_flags_t *flags)
{
    long int nb = va_arg(ap, long int);
    char *base = "0123456789ABCDEF";
    int count = do_hex_hash_maj(nb, flags);

    my_put_nbr_base(nb, base);
    return my_nb_len_base(nb, base) + count;
}

int wrapper_my_put_nbr_hexa(va_list ap, check_flags_t *flags)
{
    long int nb = va_arg(ap, long int);
    char *base = "0123456789abcdef";
    int count = do_hex_hash(nb, flags);

    my_put_nbr_base(nb, base);
    return my_nb_len_base(nb, base) + count;
}

int wrapper_my_put_nbr_octal(va_list ap, check_flags_t *flags)
{
    long int nb = va_arg(ap, long int);
    char *base = "01234567";
    int count = do_oct_hash(nb, flags);

    my_put_nbr_base(nb, base);
    return my_nb_len_base(nb, base) + count;
}

int wrapper_my_put_nbr_unsigned_int(va_list ap, check_flags_t *flags)
{
    unsigned int nb = va_arg(ap, unsigned int);
    char *base = "0123456789";

    my_put_nbr_base(nb, base);
    return my_nb_len_base(nb, base);
}

int wrapper_my_put_b(va_list ap, check_flags_t *flags)
{
    unsigned int nb = va_arg(ap, unsigned int);
    char *base = "01";

    my_put_nbr_base(nb, base);
    return my_nb_len_base(nb, base);
}
