// Write a program to enter the numbers till the user wants and at the 
// end it should display the count of positive, negative and zeros 
// entered. 

#include <stdio.h> 
int main( )  
{ 
 int  neg, pos, zero, n ;  
 char ch = 'y' ;  
 pos = neg = zero = 0 ; 
 while ( ch == 'y' || ch == 'Y' )  
 { 
  printf ( "Enter a number: \n" ) ;  
  scanf ( "%d", &n ) ;  
  if ( n > 0 )  
   pos++ ;  
  if ( n < 0 )  
   neg++ ;  
  if ( n == 0 )  
   zero++ ;  
  printf ( "Do you want to continue y/n" ) ;  
  fflush ( stdin ) ;  
  scanf ( "%c", &ch ) ;  
 } 
 printf ( "Positive = %d\n", pos ) ;  
 printf ( "Negative = %d\n", neg ) ;  
 printf ( "Zeros = %d\n", zero ) ;  
 return 0 ;  
} 