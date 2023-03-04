#include "main.h"

/**
*jack_bauer - prints the seconds of a day for jack
*
*Return: void
*/
void jack_bauer(void)
{
	int h_ten = 0;
	int h_limit;
	int h_unit;
	int m_ten;
	int m_unit;

	while (h_ten < 3)
	{
		h_unit = 0;
		if (h_ten > 1)
		{
			h_limit = 4;
		}
		else
		{
			h_limit = 10;
		}
		while (h_unit < h_limit)
		{
			m_ten = 0;
			while (m_ten < 6)
			{
				m_unit = 0;
				while (m_unit < 10)
				{
					_putchar('0' + h_ten);
					_putchar('0' + h_unit);
					_putchar('0' + m_ten);
					_putchar('0' + m_unit);
					_putchar('\n');
					m_unit++;
				}
				m_ten++;
			}
			h_unit++;
		}
		h_ten++;
	}
}
