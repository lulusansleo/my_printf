/*
** EPITECH PROJECT, 2022
** mini_printf
** File description:
** only file
*/

#include "../include/my.h"
#include <stdarg.h>

int check_flags_order(char *format, int i);
int is_argtype(char c);
int is_width(char c);
int is_flag(char c);

int my_printf(char *s, ...)
{
    va_list ap;
    int arg_nb = 0;

    va_start(ap, s);
    arg_nb = write_s(s, ap);
    va_end(ap);
    return arg_nb;
}

int is_a_flag(char c)
{
    if (c == 'd' || c == 'i' || c == 's'
    || c == 'c' || c == 37 || c != 'n')
        return 1;
    else
        return 0;
}

int write_s(char *s, va_list ap)
{
    int count = 0;

    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == 37 && check_flags_order(s, i + 1) == 1) {
            i++;
            count += assign_function(s[i], ap);
        } else {
            my_putchar(s[i]);
            count += 1;
        }
    }
    return count;
}

int assign_function(char c, va_list ap)
{
    char *flags = "scid%xXoup";
    int (*fptr []) (va_list ap) = {&wrapper_my_putstr, &wrapper_my_putchar,
    &wrapper_my_put_nbr, &wrapper_my_put_nbr, &my_print_percent,
    &wrapper_my_put_nbr_hexa, &wrapper_my_put_nbr_hexa_m,
    &wrapper_my_put_nbr_octal, &wrapper_my_put_nbr_unsigned_int,
    &wrapper_my_put_nbr_hexa};

    for (int i = 0; flags[i] != '\0'; ++i)
        if (flags[i] == c)
            return fptr[i](ap);
    return 0;
}

int my_print_percent(va_list ap)
{
    write(1, "%", 1);
    return 1;
}
