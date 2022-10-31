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

    if ((long int) nb == 0) {
        while ((long int) nb == 0) {
            nb = nb * my_compute_power_rec(10, 1);
            i++;
        }
        n = (long int) nb;
        return my_nb_len(n) - i;
    }
    if (nb < 10)
        return 1;
    while (nb >= 10) {
        i++;
        nb = nb / 10;
    }
    return i;
}

void my_display_e_second(long int e, double nb, long int e_sign)
{
    if (e < 10) {
        if (e_sign == 1) {
            my_putstr("e-0");
            my_put_nbr(e);
        } else {
            my_putstr("e+0");
            my_put_nbr(e - 1);
        }
        return;
    } else {
        if (e_sign == 1) {
            my_putstr("e-");
            my_put_nbr(e);
        } else {
            my_putstr("e+");
            my_put_nbr(e - 1);
        }
        return;
    }
}

void my_displays_e(long int e, double nb, long int e_sign)
{
    my_put_float(nb);
    if (e == 1) {
        if (e_sign == 0)
            my_putstr("e+00");
        if (e_sign == 1)
            my_putstr("e-01");
        return;
    }
    my_display_e_second(e, nb, e_sign);
}

int scientific_notation_e(double nb)
{
    long int e = 0;
    long int e_sign = 0;
    union bit_float data;

    data.f = nb;
    if ((data.a >> 31) == 1) {
        nb = nb * (-1);
        my_putchar('-');
    }
    e = my_get_exponent(nb);
    if (e < 0) {
        e = e * (-1);
        e_sign++;
        while ((long int) nb == 0)
            nb = nb * my_compute_power_rec(10, 1);
    } else
        while (nb > 10)
            nb = nb / my_compute_power_rec(10, 1);
    my_displays_e(e, nb, e_sign);
    return (data.a >> 31) + 8 + 4;
}
