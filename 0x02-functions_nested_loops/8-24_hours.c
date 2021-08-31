#include "holberton.h"

void jack_bauer(void){

int x = 0;
int hour1 = 0, hour2 = 0, minute1 = 0, minute2 = 0;

while(24 * 60){

_putchar(hour1);
_putchar(hour2);
_putchar(":");
_putchar(minute1);
_putchar(minute2);

if(minute2 > 9){
minute2 = 0;
minute1++;

}
if(minute1 > 5){
minute1 = 0;
hour2++;
}
if(hour2 > 9){
hour2 = 0;
hour1++;
}
x++;
}
}
