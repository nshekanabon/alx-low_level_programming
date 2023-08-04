#include "main.h"

/**
* get_bit - returns value of a bit at given index
* @n: decimal value to be checked.
* @index: index starting from 0 of a bit to get.
*
* Return: value of the bit at index or -1 if error.
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int check = 1, value;

if (n == 0)
return (0);

if (index > 64)
return (-1);

check = check << index;

if (n & check)
value = 1;
else
value = 0;

return (value);
}
