/*
** EPITECH PROJECT, 2022
** my_put_float
** File description:
** Display a float.
*/

#include "include/my.h"

int my_put_float(double nb)
{
    int pow = 6;
    int nb_len = 0;
    int nb_len_return = 0;
    long int n = 0;
    int n2 = 0;
    int n3 = 0;
    long int i = 0;
    double ten_pow = 1;
    double nb2 = 0;

    n = my_nb_len(nb);
    nb = nb * my_compute_power_rec(10, pow);
    n2 = my_nb_len(nb); 
    n3 = n2 - n;
    nb2 = nb / my_compute_power_rec(10, n2 - n);
    my_put_nbr(nb2);
    my_putchar('.');
    ten_pow = my_compute_power_rec(10, n2);
    while (n2 >= n3) {
        i = nb / my_compute_power_rec(10, n2);
        nb = nb - (i * my_compute_power_rec(10, n2));
        n2--;
    }
    nb2 = nb / 1;
    my_put_nbr(nb2);
    return nb_len_return + 1;
}
