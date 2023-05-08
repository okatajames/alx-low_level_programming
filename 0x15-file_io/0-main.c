#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Checks the code
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
    ssize_t s;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    s = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", s);
    s = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", s);
    return (0);
}
