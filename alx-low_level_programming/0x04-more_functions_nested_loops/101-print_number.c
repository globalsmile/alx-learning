#include "main.h"
/**
 * print_number - prints numbers
 *
 */
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        _putchar('0' + (-n) / 10);
        _putchar('0' + (-n) % 10);
    }
    else if (n >= 0 && n <= 9)
    {
        _putchar('0' + n % 10);
    }
    else if (n > 9 && n <= 99)
    {
        _putchar('0' + n / 10);
        _putchar('0' + n % 10);
    }
    else if (n > 99 && n <= 999)
    {
        _putchar('0' + n / 100);
        _putchar('0' + ((n / 10) % 10));
        _putchar('0' + ((n % 100) % 10));
    }
    else
    {
        _putchar('0' + n / 1000);
        _putchar('0' + ((n / 100) % 10));
        _putchar('0' + ((n % 100) / 10));
        _putchar('0' + ((n % 100) % 10));
    }
}
