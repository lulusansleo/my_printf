/*
** EPITECH PROJECT, 2022
** my_put_float
** File description:
** Display a float.
*/

#include "../include/my.h"

int display_float(int pow, long int w,
long int d)
{
    int i = 0;
    int n = my_nb_len(d);
    my_put_nbr(w);
    my_putchar('.');
    while (i < pow - n) {
        my_putchar(48);
        i++;
    }
    my_put_nbr(d);
    return n + my_nb_len(w);
}

int my_put_float(double nb)
{
    long long int w_part_display = 0;
    double d_part = 0;
    int nb_len_return = 0;
    int pow = 6;
    union bit_float data;

    data.f = nb;
    if ((data.a >> 31) == 1) {
        nb = nb * (-1);
        my_putchar('-');
    }
    w_part_display = (long long int) nb;
    d_part = nb - w_part_display;
    while (pow > 0) {
        d_part = d_part * 10;
        pow--;
    }
    nb_len_return = display_float(pow, w_part_display, d_part);
    return nb_len_return + (data.a >> 31);
}
