// Write a program to receive an unsigned 16-bit integer and then 
// exchange the contents of its two bytes using bitwise operators.

/* Program to exchange the contents of numbers two bytes */ 
# include <stdio.h>
void showbits ( unsigned int ) ; 
int main( )
{
unsigned short int num, leftbyte, rightbyte, newnum ; 
printf ( "Enter a number: " ) ;
scanf ( "%hu", &num ) ; 
showbits ( num ) ; 
printf ( "\n" ) ;
leftbyte = ( num & 0xFF00 ) >> 8 ; 
rightbyte = num & 0x00FF ;
newnum = ( rightbyte << 8 ) | leftbyte ;
printf ( "New number after exchanging bytes: " ) ; 
showbits ( newnum ) ;
printf ( "\n" ) ;
return 0 ;
}
void showbits ( unsigned int n )
{
int i ;
unsigned int j, k, andmask ; for ( i = 15 ; i >= 0 ; i-- )
{
j = i ;
andmask = 1 << j ; 
k = n & andmask ;
k == 0 ? printf ( "0" ) : printf ( "1" ) ;
}
}