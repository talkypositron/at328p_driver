
void at328_arduino_io_init(int pin, int dir){
char port;
int bit_index;
if ((pin>=0 && pin<=7)){
 port='D'; 
 bit_index=pin;
}
else {
 port= 'B';
 bit_index=pin-8;
}
if ((dir==0) && (port='D')){

 DDRD &= ~(1<<bit_index);
}
else if ((dir ==1) && (port= 'D')){
 DDRD |= (1<<bit_index);
}
else if ((dir ==0) && (port= 'B')){
 DDRB &= ~(1<<bit_index);
}
else {
 DDRB |= (1<<bit_index);
}
}

void at328_arduino_io_write(int pin, int val){
char port;
int bit_index;
if ((pin>=0 && pin<=7)){
 port='D'; 
 bit_index=pin;
}
else {
 port= 'B';
 bit_index=pin-8;
}
if((val==0)&& (port=='B')){
PORTB &= ~(1 << bit_index);
}
else if ((val==0)&&(port=='D')){
 PORTD &= ~(1 << bit_index);

}
else if ((val==1)&&(port=='B')){
PORTB |= (1 << bit_index);
}
else{
PORTD |= (1 << bit_index);
}
}

int at328_arduino_io_read(int pin){
char port;
int bit_index;
if ((pin>=0 && pin<=7)){
 port='D'; 
 bit_index=pin;
 if((PIND & 1<<bit_index)){
  return 1;
 }
 else {
  return 0;
 }
}
else {
 port= 'B';
 bit_index=pin-8;
 if((PINB & 1<<bit_index)){
  return 1;
 }
 else {
  return 0;
 }

}

}
