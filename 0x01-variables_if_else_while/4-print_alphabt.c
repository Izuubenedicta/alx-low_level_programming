#include <stdio.h>

/**
 *main -Entry point
 *
 *Description:'Program  that prints the alphabet in lowercase except e,q'
 *Return: Always 0 (Success)
 */
int main(void)
{
int i = 97;
while (i < 123)
{
if (i != 101 && i != 113)
{
putchar(i);
}
i++;
}
putchar(10);
return (0);
}