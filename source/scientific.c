/*
** EPITECH PROJECT, 2022
** scientific
** File description:
** Flag for scientific notation e.
*/

#include "../include/my.h"

int my_get_exponent(double nb)
{
    unsigned long int n = 1;
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
    } else {
        my_putstr("e+");
        my_put_nbr(e - 1);
    }
}

int scientific_notation_e(double nb)
{
    long int s = 0;
    long int e = 0b011111111;
    union bit_float data;

    data.f = nb;
    s = data.a >> 31;
    e = my_get_exponent(nb);

    nb = nb / my_compute_power_rec(10, e - 1);
    my_displays_e(e, nb);
    return 0;
}
