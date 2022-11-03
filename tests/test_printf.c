/*
** EPITECH PROJECT, 2022
** Flag %s
** File description:
** Unit test for flag %s
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
    char *s = "Hey I am Rahul";

    my_printf("%s\n", s);
    cr_assert_stdout_eq_str("Hey I am Rahul\n");
}

Test(my_put_nbr, my_test_nbr, .init=redirect_stdout)
{
    int n = 124556;

    my_printf("%d\n", n);
    cr_assert_stdout_eq_str("124556\n");
}

Test(scientific_notation_e, my_test_science, .init=redirect_stdout)
{
    double nb = 11223242.1341123;

    my_printf("%e\n", nb);
    cr_assert_stdout_eq_str("1.122324e+07\n");
}

Test(scientific_notation_big_e, my_test_big_science, .init=redirect_stdout)
{
    double nb = 11223242.1341123;

    my_printf("%E\n", nb);
    cr_assert_stdout_eq_str("1.122324E+07\n");
}