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
