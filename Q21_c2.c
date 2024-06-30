// Consider an unsigned integer in which rightmost bit is numbered as 
// 0. Write a function checkbits ( x, p, n ) which returns true if all "n" 
// bits starting from position "p" are turned on. For example,
// checkbits ( x, 4, 3 ) will return true if bits 4, 3 and 2 are 1 in number 
// x.

# include <stdio.h> 
#include <math.h>
# define _BV(x) ( 1 << x )
void showbits ( unsigned int ) ;
int checkbits ( unsigned int, int, int ) ; 
int main( )
{
unsigned int x = 0xF0FF ; 
int n, p ;
int flag ;
printf ( "Value of x = " ) ; 
showbits ( x ) ;
printf ( "\n" ) ;
printf ( "Enter position and number of bits:\n" ) ; 
scanf ( "%d %d", &p, &n ) ;
flag = checkbits ( x, p, n ) ; 
if ( flag == 1 )
printf ( "%d bits from pos %d are turned on\n", n, p ) ; 
else
printf ( "%d bits from pos %d are not turned on\n", n, p ) ; 
return 0 ;
}
void showbits ( unsigned int n )
{
int i ;
unsigned int j, k, andmask ;
for ( i = 15 ; i >= 0 ; i-- )
{
j = i ;
k = n & _BV( j ) ;
k == 0 ? printf ( "0" ) : printf ( "1" ) ;
}
}
int checkbits ( unsigned int x, int p, int n )
{
int i ;
for ( i = 0 ; i < n ; i++ )
{
if ( x & _BV( p ) != _BV( p ) )
return 0 ;
p-- ;
}
return 1 ;
}