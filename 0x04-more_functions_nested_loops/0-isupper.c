#include "main.h"

/**
* main - a function that checkc for uppercase character
* Return: Always 0.
*/

int _isupper(int c)
{
    if (c >='A' && c <= 'Z')
        return (1);
        
    else 
        return (0);

}

