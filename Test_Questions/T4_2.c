// Write a program to count number of words in a given text file. 
 
#include <stdio.h> 
#include <stdlib.h> 
int main( )  
{ 
 char  ch ; FILE  *fp ;  
 char  fname[ 67 ] ;  
 int count = 0 ;  
 printf ( "Enter File name: " ) ;  
 gets ( fname ) ;  
 fp = fopen ( fname, "r" ) ;  
 if ( fp == NULL )  
 { 
  printf ("Unable to open file\n" ) ; 
  exit ( 1 ) ; 
 } 
 while ( ( ch = getc ( fp ) ) != EOF )  
{  
if ( ch == ' ' )  
count++ ;  
}
printf ( "No of words = %d", count + 1 ) ;  
fclose ( fp ) ;  
} 
