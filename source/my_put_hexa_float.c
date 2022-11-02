/*
** EPITECH PROJECT, 2022
** my_put_hexa_float
** File description:
** my_put_hexa_float file
*/

#include "../include/my.h"

double my_get_two_with_nbr(double nb, int e)
{
    int i = 0;
    int e_sign = 0;

    if (e < 0) {
        e = e * (-1);
        e_sign = 1;
    }
    while (i < e) {
        if (e_sign == 1) {
            nb = nb * 2;
        } else {
            nb = nb / 2;
        }
        i++;
    }
    return nb;
}

int my_get_exponent_two(double nb)
{
    double n = 1;
    int pow = 0;
    int limit = 0;

    if (nb >= 1) {
        while (nb >= n || limit >= 13) {
            n = n * 2;
            pow++;
            limit++;
        }
        return pow - 1;
    } else {
        while (nb <= n || limit >= 13) {
            n = n / 2;
            pow--;
            limit++;
        }
        return pow + 1;
    }
}

int my_put_hexa_float(double nb)
{
    int e = my_get_exponent_two(nb);

    nb = my_get_two_with_nbr(nb, e);
}
