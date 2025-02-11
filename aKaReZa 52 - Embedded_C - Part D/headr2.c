#include "header2.h"

extern char lcd[16];

void sayHello(void)
{
  lcd_gotoxy(0,1);
  lcd_puts("Hello!");
};

void printSum(void)
{
  uint16_t temp;
  temp = Sum(10, 35);
  sprintf(lcd, "pSum = %u", temp);
  lcd_clear();
  lcd_puts(lcd);
};