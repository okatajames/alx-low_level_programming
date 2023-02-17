#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* Main prints a random number and states whether it positive, negative or zero
* Return always 0
*/

int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
        printf("%d is positive\n", n);
    else if (n < 0)
        printf("%d is negative\n", n);
    else
        printf("%d is zero\n", n);

    return (0);

}









