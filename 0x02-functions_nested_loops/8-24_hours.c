#include "main.h"

/**
 * jack_bauer - function to print every minute of jack beur 24hrs
 * n from 0:00 t0 23:59
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;
	int h_rem;
	int m_rem;

	while (h <= 23)
	{
		while (m <= 59)
		{
			m_rem = m % 10;
			h_rem = h % 10;
			_putchar(h / 10 + '0');
			_putchar(h_rem + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m_rem + '0');
			m++;
			_putchar('\n');
		}
		h++;
		m = 0;
	}
}
