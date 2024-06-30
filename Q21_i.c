// Write a program to receive an 8-bit number into a variable and then
// check if its 3
// rd and 5th bit are off. If these bits are found to be off 
// then put them on.

# include <stdio.h>
# define _BV(x) ( 1 << x )
void showbits ( unsigned char n ) ; 
int main( )
{
unsigned char a, mask ; 
short unsigned int num ; 
printf ( "Enter a number\n" ) ; 
scanf ( "%hu", &num ) ;
num = num & 0x00FF ; 
a = num ;
printf ( "a = " ) ; 
showbits ( a ) ;
printf ( "\n" ) ; 
mask = _BV( 3 ) ;
if ( ( a & mask ) == mask ) 
printf ( "3rd bit is on\n" ) ;
else
{
printf ( "3rd bit is off... will put it on\n" ) ; 
a = a | mask ;
printf ( "a = " ) ; 
showbits ( a ) ; 
printf ( "\n" ) ;
}
mask = _BV( 5 ) ;
if ( ( a & mask ) == mask ) 
printf ( "5th bit is on\n" ) ;
else
{
printf ( "5th bit is off... will put it on\n" ) ; 
a = a | mask ;
printf ( "a = " ) ; 
showbits ( a ) ; 
printf ( "\n" ) ;
}
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