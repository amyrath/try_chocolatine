/*
** EPITECH PROJECT, 2025
** tests
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <stdio.h>

int my_strlen(char *str);

Test(my_strlen, errorcase3)
{
    char *str = "papa";
    int y = my_strlen(str);

    cr_assert_eq(y, 4);
}

Test(my_strlen2, errorcase4)
{
    char *str = "papa";
    int y = my_strlen(str);

    cr_assert(y != 0);
}
