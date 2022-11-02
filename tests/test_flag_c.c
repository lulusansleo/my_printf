/*
** EPITECH PROJECT, 2022
** Flag %c
** File description:
** Unit test for flag %c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_stdout(void)
{
    cr_redirect_stdout();
}

Test(my_putstr, my_test_str, .init=redirect_stdout)
{
    char s = 'h';
    my_printf("%c AHAH", s);
    cr_assert_stdout_eq_str("h AHAH");
}
