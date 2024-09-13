#include <avr/delay.h>
#define DDRB *(volatile uint8_t*)0x24
#define DDRD *(volatile uint8_t*)0x2A
#define PORTD *(volatile uint8_t*)0x2B
#define PORTB *(volatile uint8_t*)0x25


int main(){
int pin=10;
int val=1;
int dir=1;
at328_arduino_io_init(pin, dir);
at328_arduino_io_write(pin, val);
_delay_ms(1000);
val=0;
at328_arduino_io_write(pin, val);
return 0;
}
