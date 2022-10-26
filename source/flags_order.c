/*
** EPITECH PROJECT, 2022
** flag_order
** File description:
** flag_order
*/

#include <stdarg.h>
#include "../include/my.h"

int is_flag(char c)
{
    int i = 0;
    char *s = "-0+ #";

    while (s[i] != '\0') {
        if (s[i] == c) {
            return 1;
        }
        i++;
    }
    return 0;
}

int is_width(char c)
{
    if (is_flag(c == 1)) {
        return 0;
    }
    if ((c >= '0' && c <= '9') || c == '.'
        || c == '*') {
        return 1;
    } else {
        return 0;
    }
}

int is_argtype(char c)
{
    char *t = "scid%xXoupfeEgGnb";
    int k = 0;

    if (is_flag(c) == 1 || is_width(c) == 1)
        return 0;
    while (t[k] != '\0') {
        if (c == t[k]) {
            return 1;
        }
        k++;
    }
    return 0;
}

int check_flags_order(char *format, int i)
{
    while (format[i] != '\0' && is_flag(format[i]) != 0)
        i++;
    while (format[i] != '\0' && is_width(format[i]) != 0)
        i++;
    if (is_argtype(format[i]) != 0) {
        return 1;
    }
    return 0;
}
