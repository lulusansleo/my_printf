/*
** EPITECH PROJECT, 2022
** flag_g
** File description:
** flag_g file
*/

#include "../include/my.h"

int my_put_g(double nb)
{
    long int e = my_get_exponent(nb);
    int nbr_len = 0;

    if (e < -4 || e > 6) {
        nbr_len = scientific_notation_e(nb, 6);
    } else {
        nbr_len = my_put_float(nb, 8);
    }
    return nbr_len;
}

int my_put_big_g(double nb)
{
    long int e = my_get_exponent(nb);
    int nbr_len = 0;

    if (e < -4 || e > 6) {
        nbr_len = scientific_notation_big_e(nb, 6);
    } else {
        nbr_len = my_put_float(nb, 8);
    }
    return nbr_len;
}
