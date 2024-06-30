// Write a program to receive an 8-bit number into a variable and then 
// set its odd bits to 1.

# include <stdio.h>
# define _BV(x) ( 1 << x )
void showbits ( unsigned char n ) ; 
int main( )
{
unsigned char a, b, c ; 
unsigned int num ;
printf ( "Enter a number\n" ) ; 
scanf ( "%hu", &num ) ;
num = num & 0x00FF ; 
a = num ;
b = _BV(1) | _BV(3) | _BV(5) | _BV(7);
a = a | b ; showbits ( a ) ; 
printf ( "\n" ) ;
}
void showbits ( unsigned char n )
{
int i ;
unsigned char j, k, andmask ; 
for ( i = 7 ; i >= 0 ; i-- )
{
j = i ;
andmask = 1 << j ;
k = n & andmask ;
k == 0 ? printf ( "0" ) : printf ( "1" ) ;
}
}