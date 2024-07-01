// Write a program to multiply two integers using bitwise operators. 

#include <stdio.h> 
int  add ( int, int ) ; 
int  main( )  
{ 
int  a, b, result ;
printf ( "\nEnter the numbers to be multiplied :" ) ; 
 scanf ( "%d%d", &a, &b ) ; 
 result = 0 ; 
 while ( b != 0 ) 
 { 
  if (b & 1 )             
   result = add ( result, a ) ; 
  a <<= 1 ;    
       b >>= 1 ;    
 } 
    printf ( "Result:%d", result ) ; 
} 
int  add ( int  x, int  y ) 
{ 
 while ( y != 0 ) 
 { 
       int  carry = x & y ;   
  x = x ^ y ;  
  y = carry << 1 ; 
 } 
 return x ; 
} 