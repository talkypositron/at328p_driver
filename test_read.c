#include <avr/delay.h>
#define DDRB *(volatile uint8_t*)0x24
#define DDRD *(volatile uint8_t*)0x2A
#define PORTD *(volatile uint8_t*)0x2B
#define PORTB *(volatile uint8_t*)0x25
#define PIND *(volatile uint8_t*)0x29
#define PINB *(volatile uint8_t*)0x23
int main(){
  int pin=10;
 int dir=1;
 
 int val;
at328_arduino_io_init(10, 1);
pin=12;
dir=0;
at328_arduino_io_init(12, 0);
while(1){
  val=at328_arduino_io_read (12);
  at328_arduino_io_write(10, val);
}
return 0;
}

