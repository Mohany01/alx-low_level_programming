#include "main.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer
* starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
int hr, min;
for (int hr = 0; hr <= 23; hr++)
{
for (int min = 0; min <= 59; min++)
{
_putchar (hr / 10 + '0');
_putchar (hr % 10 + '0');
_putchar (':');
_putchar (min / 10 + '0');
_putchar (min % 10 + '0');
}
}
}
