// Write a program to receive an 8-bit number into a variable and then 
// exchange its higher 4 bits with lower 4 bits.
/* Program to exchange the contents of numbers two bytes */ 
# include <stdio.h>
void showbits ( unsigned char ) ; 
int main( )
{
unsigned short int num ;
unsigned char a, leftnibble, rightnibble, newnum ; 
printf ( "Enter a number: " ) ;
scanf ( "%hu", &num ) ; 
a = num & 0x00FF ;
showbits ( num ) ; 
printf ( "\n" ) ;
leftnibble = ( a & 0xF0 ) >> 4 ; 
rightnibble = a & 0x0F ;
newnum = ( rightnibble << 4 ) | leftnibble ;
printf ( "New number after exchanging nibbles: " ) ; 
showbits ( newnum ) ;
printf ( "\n" ) ; 
return 0 ;
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
