#include <stdint.h>
#include <util/delay.h>

typedef struct  //1 Byte
{
  uint8_t PIN0:1;
  uint8_t PIN1:1;
  uint8_t PIN2:1;
  uint8_t PIN3:1;
  uint8_t PIN4:1;
  uint8_t PIN5:1;
  uint8_t PIN6:1;
  uint8_t PIN7:1;
}GPIO_pinType;

typedef union 
{
  uint8_t Reg;
  GPIO_pinType Bit;
}U_type;


typedef struct
{
  U_type PIN;  // 0x23
  U_type DDR;  // 0x24 
  U_type PORT; // 0x25
}GPIO_Type;

#define GPIOB ((GPIO_Type*) 0x23)
#define GPIOD ((GPIO_Type*) 0x29)

int main(void)
{
  GPIOB->DDR.Reg = 0xAA;
  GPIOD->DDR.Bit.PIN0 = 1;
  while(1)
  {
    GPIOB->PORT.Reg = 0xAA;
    _delay_ms(1000);
    GPIOB->PORT.Reg = 0x00;
    _delay_ms(1000);    
  };
};
