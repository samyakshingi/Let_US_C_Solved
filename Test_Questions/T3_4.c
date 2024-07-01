//  Write a program that checks and reports whether sum of elements 
// in the ith row of a 5 x 5 array is equal to sum of elements in ith 
// column. 

#include <stdio.h> 
int main( )  
{ 
int  a[ 5 ][ 5 ], i, j, sumr = 0, sumc = 0 ;  
printf ( "Enter elements of a 5 x 5 array\n" ) ;  
for ( i = 0 ; i < 5 ; i++ )  
for ( j = 0 ; j < 5 ; j++ )  
scanf ( "%d", &a[ i ][ j ] ) ;  
printf ( "Enter row and column you wish to check\n" ) ;  
scanf ( "%d", &i ) ;  
for ( j = 0 ; j < 5 ; j++ )  
sumr = sumr + a[ i - 1 ][ j ] ;  
for ( j = 0 ; j < 5 ; j++ )  
sumc = sumc + a[ j ][ i - 1 ] ;  
if ( sumr == sumc )  
printf ( "Sums are equal" ) ;  
else  
printf ( "Sums are not equal" ) ;  
return 0 ;  
}  
