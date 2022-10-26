/*
** EPITECH PROJECT, 2022
** myh
** File description:
** myh
*/

#ifndef myh
    #define myh

    #include <stddef.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdarg.h>
    #include <stdio.h>

    typedef struct check_flags {
        int hash;
        int minus;
        int plus;
        int zero;
        int empty;
        int max;
        int min;
        char flag;
    } check_flags_t;

    int get_arg_number(char *str);
    int my_reverse_nbr(int nb);
    int my_compute_power_rec(int nb , int p);
    int my_compute_square_root(int nb);
    int my_find_prime_sup(int nb);
    int my_getnbr(char const *str);
    int my_is_prime(int nb);
    int my_isneg(int nb);
    long int my_put_nbr(long int nb);
    int my_putchar(char c);
    int my_putstr(char const *str);
    char *my_revstr(char *str);
    void my_sort_int_array(int *tab, int size);
    int my_str_isalpha(char const *str);
    int my_isalpha(char c);
    int my_str_islower(char const *str);
    int my_islower(char c);
    int my_str_isnum(char const *str);
    int my_isnum(char c);
    int my_str_isprintable(char const *str);
    int my_isprintable(char c);
    int my_str_isupper(char const *str);
    int my_isupper(char c);
    char *my_strcapitalize(char *str);
    char *my_strcat(char *dest, char const *src);
    int my_strcmp(char const *s1, char const *s2);
    int my_strcmp2(char const *s1, char const *s2);
    char *my_strcpy(char *dest, char const *src);
    int my_strlen(char const *str);
    char *my_strlowcase(char *str);
    char *my_strncat(char *dest, char const *src, int n);
    int my_strncmp(char const *s1, char const *s2, int n);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_strstr(char *str, char const *to_find);
    char *my_strncpy2(char *dest, char const *src, int n);
    char *my_strupcase(char *str);
    void my_swap(int *a, int *b);
    int my_show_word_array(char * const *tab);
    char *my_strdup(char const *src);
    char **my_str_to_word_array(char const *str);
    int count_letter(char *str, char c);
    int error_handling(int argc, char ** argv);
    int get_letter_count(char const *str);
    void print_result(char letter, int frequency, int count);
    char *comparativetable(char *str);
    void print_float(int frequency);
    int assign_function(va_list ap, check_flags_t *flags);
    int wrapper_my_put_nbr(va_list ap, check_flags_t *flags);
    int wrapper_my_put_nbr_hexa(va_list ap, check_flags_t *flags);
    int wrapper_my_put_nbr_hexa_m(va_list ap, check_flags_t *flags);
    int wrapper_my_put_nbr_octal(va_list ap, check_flags_t *flags);
    int wrapper_my_put_nbr_unsigned_int(va_list ap, check_flags_t *flags);
    int wrapper_my_putstr(va_list ap, check_flags_t *flags);
    int wrapper_my_putchar(va_list ap, check_flags_t *flags);
    int write_s(char *s, va_list ap);
    int my_print_percent(va_list ap, check_flags_t *flags);
    int my_printf(char *s, ...);
    long int my_put_nbr_base(long int nb, char *base);
    int my_nb_len(long int nb);
    int check_flags_order(char *format, int i);
    int my_nb_len_base(long int nb, char *str);
    int what_flags(check_flags_t *flags, char *str, int i);
    void flags_reset(check_flags_t *flags);
    int wrapper_my_put_b(va_list ap, check_flags_t *flags);
    int my_print_non_printable(char *str);
    int wrapper_print_non_printable(va_list ap, check_flags_t *flags);
    int do_hex_hash(long int nb, check_flags_t *flags);
    int do_hex_hash_maj(long int nb, check_flags_t *flags);
    int do_oct_hash(long int nb, check_flags_t *flags);
    int do_empty_int(long int nb, check_flags_t *flags);

#endif /* !myh */
