//  Create an array of pointers containing names of 10 cities. Write a 
// program that sorts the cities in reverse alphabetical order and 
// prints this reversed list. 
 
#include <stdio.h> 
#include <string.h> 
int main( )  
{ 
 char *cities[ ] = { 
      "Nagpur", "Kanpur", "Delhi",  
      "Sikandarabad", "Akola", "Ghatanji",  
      "Jabalpur", "Ziri", "Shegaon", "Bombay" 
      } ;  
 char  *t ;  
 int  i, j ;  
 for ( i = 0 ; i < 9 ; i++ )  
 { 
  for ( j = i + 1 ; j < 10 ; j++ )  
  { 
   if ( strcmp ( cities[ i ], cities[ j ] ) < 0 )  
   { 
    t = cities[ i ] ;  
    cities[ i ] = cities[ j ] ;  
    cities[ j ] = t ;  
   } 
  } 
 } 
 for ( i = 0 ; i < 10 ; i++ )  
  printf ( "%s\n", cities[ i ] ) ; 
 return 0 ;  
}