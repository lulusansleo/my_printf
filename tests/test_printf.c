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
    int n = 12123456;

    my_printf("%d\n", n);
    cr_assert_stdout_eq_str("12123456\n");
}

Test(scientific_notation_e, my_test_science, .init=redirect_stdout)
{
    double nb = 11223242.1341123;

    my_printf("%e\n", nb);
    cr_assert_stdout_eq_str("1.122324e+07\n");
}

Test(negative_scientific_notation_e, my_testn_science, .init=redirect_stdout)
{
    double nb = -0.1341122;

    my_printf("%e\n", nb);
    cr_assert_stdout_eq_str("-1.341122e-01\n");
}

Test(negative2_scientific_notation_e, my_test2n_science, .init=redirect_stdout)
{
    double nb = -1.341122;

    my_printf("%e\n", nb);
    cr_assert_stdout_eq_str("-1.341122e+00\n");
}

Test(scientific_notation_big_e, my_test_big_science, .init=redirect_stdout)
{
    double nb = 11223242.1341123;

    my_printf("%E\n", nb);
    cr_assert_stdout_eq_str("1.122324E+07\n");
}

Test(negative_scientific_notation_big_e, my_testn_big_science, .init=redirect_stdout)
{
    double nb = -0.1341122;

    my_printf("%E\n", nb);
    cr_assert_stdout_eq_str("-1.341122E-01\n");
}

Test(negative2_scientific_notation_big_e, my_test2n_big_science, .init=redirect_stdout)
{
    double nb = -1.341122;

    my_printf("%E\n", nb);
    cr_assert_stdout_eq_str("-1.341122E+00\n");
}

Test(my_put_float, my_test_put_float_nbr, .init=redirect_stdout)
{
    double n = 121.23456;

    my_printf("%f\n", n);
    cr_assert_stdout_eq_str("121.234560\n");
}

Test(my_put_float_second, my_test_float_two, .init=redirect_stdout)
{
    double n = 17178227612323.0;

    my_printf("%f\n", n);
    cr_assert_stdout_eq_str("17178227612323.000000\n");
}

Test(my_put_hexa, my_test_nbr_hexa, .init=redirect_stdout)
{
    int n = -1234;

    my_printf("%x\n", n);
    cr_assert_stdout_eq_str("fffffb2e\n");
}

Test(my_put_hexa_big, my_test_nbr_hexa_big, .init=redirect_stdout)
{
    int n = -1234;

    my_printf("%X\n", n);
    cr_assert_stdout_eq_str("FFFFFB2E\n");
}

Test(my_put_modulo, my_test_modulo, .init=redirect_stdout)
{
    my_printf("%%\n");
    cr_assert_stdout_eq_str("%\n");
}

Test(my_is_nothing, my_test_nothing, .init=redirect_stdout)
{
    my_printf("Hello my name is Aurelien and i like hess\n");
    cr_assert_stdout_eq_str("Hello my name is Aurelien and i like hess\n");
}

Test(my_non_existant_flag, my_test_non_flag, .init=redirect_stdout)
{
    my_printf("%w\n", 12);
    cr_assert_stdout_eq_str("%w\n");
}

Test(my_putchar, my_test_putchar, .init=redirect_stdout)
{
    my_printf("%c\n", 'c');
    cr_assert_stdout_eq_str("c\n");
}

Test(my_flags, my_test_flags, .init=redirect_stdout)
{
    my_printf("%# -+030.10x", 10);
    cr_assert_stdout_eq_str("0x000000000a                  ");
}

Test(my_flags_second, my_test_flags_second, .init=redirect_stdout)
{
    my_printf("%# -+030.10p", 4198480);
    cr_assert_stdout_eq_str("+0x0000401050                 ");
}

Test(multiple_flag, my_test_lots_flags, .init=redirect_stdout)
{
    my_printf("Bonjour à tous je suis %s, je suis bete avec %d de QI\n", "Aurelien", 2);
    cr_assert_stdout_eq_str("Bonjour à tous je suis Aurelien, je suis bete avec 2 de QI\n");
}

Test(big_s_flag, my_test_big_s, .init=redirect_stdout)
{
    char str[5] = "toto";
    str[1] = 6;
    my_printf("Yo les gamin %S\n", str);
    cr_assert_stdout_eq_str("Yo les gamin t\\006to\n");
}
