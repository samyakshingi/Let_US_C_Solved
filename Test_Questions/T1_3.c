// Write a program to find the range of a set of numbers that are input 
// through the keyboard. Range is the difference between the smallest 
// and biggest number in the list. 
 
#include<stdio.h> 
int main( )  
{ 
 int  n, no, flag, small, big ;  
 flag = 0 ;  
 printf ( "Enter the number of elements in the range:\n" ) ;  
 scanf ( "%d", &n ) ;  
 while ( n > 0 )  
 { 
  printf ( "Enter a number:\n" ) ;  
  scanf ( "%d", &no ) ;  
  if ( flag == 0 )  
  { 
   small = big = no ;  
   flag = 1 ;  
  } 
  else 
  { 
   if ( no > big )  
    big = no ;  
   if ( no < small )  
    small = no ;  
  } 
  n-- ;  
 } 
 printf ( "Range: %d", big - small ) ; 
 return 0 ;  
}