#include "main.h"

void jack_bauer(void)
{
int h_ten = 0;
int h_unit;
int m_ten;
int m_unit;

while (h_ten < 3){
h_unit = 0;
while (h_unit < 4){
m_ten = 0;
while (m_ten < 6){
m_unit = 0;
while (m_unit < 10){
_putchar('0'+h_ten);
_putchar('0'+h_unit);
_putchar(':');
_putchar('0'+m_ten);
_putchar('0'+m_unit);
_putchar('\n');
m_unit++;
}
++m_ten;
}
h_unit++;
}
h_ten++;
}
return;
}
