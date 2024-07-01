// If three integers are entered through the keyboard, write a program 
// to determine whether they form a Pythagorean triplet or not.  
 
#include<stdio.h> 
 int main( )  
{ 
  int  i, j, k ;  
 printf ( "Enter three integers: \n" ) ;  
 scanf ( "%d%d%d", &i, &j, &k ) ;   
 if ( ( i * i + j * j == k * k ) || ( j * j + k * k == i * i ) || ( k * k + i * i == j * j ) )  
  printf ( "Numbers form pythogorean triplet \n" ) ;  
 else  
  printf ( "Numbers do not form pythogorean triplet \n" ) ;  
 return 0 ;  
}