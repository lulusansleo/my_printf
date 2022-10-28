/*
** EPITECH PROJECT, 2022
** my_put_float
** File description:
** Display a float.
*/

#include "../include/my.h"

int display_float(long int s, int pow,
                long int w, long int d)
{
    int a = 0;
    int i = 0;
    int n = my_nb_len(d);
    if (s == 1) {
        my_putchar('-');
        a++;
    }
    my_put_nbr(w);
    my_putchar('.');
    while (i < pow - n) {
        my_putchar(48);
        i++;
    }
    my_put_nbr(d);
    return n + s + my_nb_len(w);
}

int my_put_float(double nb)
{
    long int s = 0;
    long int e = 0;
    long int m = 0;
    long int w_part = 0;
    long int w_part_display = 0;
    unsigned long int d_part = 0;
    int nb_len_return = 0;
    int pow = 6;
    union bit_float data;

    data.f = nb;
    s = data.a >> 31;
    e = (data.a >> 23) & 0b0111111110000000000000000000000;
    m = data.a  & 0b00000000011111111111111111111111;
    w_part_display = (unsigned long int) nb;
    d_part = (unsigned long int) ((nb - w_part_display) *
    my_compute_power_rec(10, pow));
    nb_len_return = display_float(s, pow, w_part_display, d_part);
    return nb_len_return;
}
