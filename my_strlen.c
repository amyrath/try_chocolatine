/*
** EPITECH PROJECT, 2025
** my_strlen
** File description:
** my_strlen
*/

#include <stdio.h>

int my_strlen(char *str)
{
    int y = 0;

       if (!str)
        return -1;
    for (; str[y] != '\0'; y++);
    return y;
}

/*int main(int ac, char **av, char **env)
{
    int y = my_strlen("papa");
    printf("%d", y);
    return 0;
}
*/
