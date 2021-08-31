int print_last_digit(int n){
int temp;

if(n < 0){
temp = -1 * (n % 10);
_putchar(temp + '0');
return (temp);
} else {
temp = n % 10;
_putchar(temp + '0');
return (temp);
}
}
