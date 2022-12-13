#include <unistd.h>
#include "main.h"

/**
 * jack_bauer - The start of program
 * Description : prints out the alphabet in lower case
 * Return: 1 and print '+'if n greater than zero
 * 0 and print '0' if zero
 * -1 and prints '-' if less than zero
*/

void jack_bauer(void)
{
	int h_1 = 0;
	int h_2 = 0;
	int m_1 = 0;
	int m_2 = 0;
	int minute = 0;

	while (minute < 1440)
	{
		_putchar(h_1 + '0');
		_putchar(h_2 + '0');
		_putchar(':');
		_putchar(m_1 + '0');
		_putchar(m_2 + '0');
		_putchar('\n');

		m_2++;
		if (m_2 > 9)
		{
			m_2 = 0;
			m_1++;
		}
		if (m_1 > 5)
		{
			m_1 = 0;
			h_2++;
		}
		if (h_2 > 9)
		{
			h_2 = 0;
			h_1++;
		}
		minute++;

	}

}
