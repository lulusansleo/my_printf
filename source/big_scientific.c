/*
** EPITECH PROJECT, 2022
** big_scientific
** File description:
** Flag for scientific notation E.
*/

#include "../include/my.h"

int my_get_exponent(double nb)
{
    int n = 1;
    int i = 1;

    if (nb < 10) {
        return 1;
    }
    while (nb > n) {
        i++;
        n = n * 10;
    }
    return i - 1;
}

void my_displays_big_e(long int e, double nb)
{
    my_put_float(nb);
    if (e == 1) {
        my_putstr("E+00");
        return;
    }
    if (e < 10) {
        my_putstr("E+0");
        my_put_nbr(e - 1);
        return;
    }
}

int scientific_notation_big_e(double nb)
{
    long int s = 0;
    long int e = 0;
    union bit_float data;

    data.f = nb;
    s = data.a >> 31;
    e = my_nb_len((unsigned long int) nb);
    nb = nb / my_compute_power_rec(10, e - 1);
    my_displays_e(e, nb);
    return 0;
}
