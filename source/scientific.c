/*
** EPITECH PROJECT, 2022
** scientific
** File description:
** Flag for scientific notation e.
*/

#include "include/my.h"

void my_displays_e(long int e, double nb)
{
    my_put_float(nb);
    if (e == 1) {
        my_putstr("e+00");
        return;
    }
    if (e < 10) {
        my_putstr("e+0");
        my_put_nbr(e - 1);
        return;
    }
}

int scientific_notation_e(double nb)
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
