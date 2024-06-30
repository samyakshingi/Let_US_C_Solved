// Rewrite the showbits( ) function used in this chapter using the BV
// macro.

# define _BV(x) ( 1 << x )
void showbits ( unsigned char n )
{
int i ;
unsigned char j, k ; 
for ( i = 7 ; i >= 0 ; i-- )
{
j = i ;
k = n & _BV( j ) ;
k == 0 ? printf ( "0" ) : printf ( "1" ) ;
}
}
