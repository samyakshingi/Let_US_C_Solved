// Write a program to scan an 8-bit number into a variable and check 
// whether its 3rd, 6th and 7th bit is on.

# include <stdio.h> 
# define _BV(x) ( 1 << x ) 
void showbits ( unsigned char ) ; 
int main( ) 
{ 
unsigned char a ; 
unsigned int num ; 
printf ( "\nEnter a number: " ) ; 
scanf ( "%hu", &num ) ; 
num = num & 0x00FF ; 
a = num ; 
showbits ( num ) ; 
printf ( "\n" ) ; 
if ( ( a & _BV( 3 ) ) == _BV( 3 ) ) 
printf ( "Its third bit is on\n" ) ; 
else 
printf ( "Its third bit is off\n" ) ; 
if ( ( a & _BV( 6 ) ) == _BV( 6 ) ) 
printf ( "Its sixth bit is on\n" ) ; 
else 
printf ( "Its sixth bit is off\n" ) ; 
if ( ( a & _BV( 7 ) ) == _BV( 7 ) ) 
printf ( "Its seventh bit is on\n" ) ; 
else
printf ( "Its seventh bit is off\n" ) ; 
return 0 ; 
} 
void showbits ( unsigned char n ) 
{ 
int i ; 
unsigned char k, andmask ; 
for ( i = 7 ; i >= 0 ; i-- ) 
{ 
andmask = 1 << i ; 
k = n & andmask ; 
k == 0 ? printf ( "0" ) : printf ( "1" ) ; 
} 
}