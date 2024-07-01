// Write a function that receives as parameters, a 1-D array, its size 
// and an integer and returns number of times the integer occurs in 
// the array. 

#include <stdio.h> 
int countnum ( int*, int, int ) ;  
int main( )  
{  
int arr[ 100 ], size, num, i, count ;  
printf ( "Enter the size of array:\n" ) ;  
scanf ( "%d", &size ) ;  
printf ( "Enter the elements of an array:\n" ) ;  
for ( i = 0 ; i < size ; i++ )  
scanf ( "%d", &arr[ i ] ) ;  
printf ( "Enter the number you want to count:\n" ) ;  
scanf ( "%d", &num ) ;  
count = countnum ( arr, size, num ) ;  
printf ( "count = %d", count ) ;  
return 0 ;  
}
int  countnum ( int  *a, int  sz, int  n )  
{ 
int  j,  cnt = 0 ;  
for ( j = 0 ; j < sz ; j++ )  
{ 
if ( *a == n )  
cnt++ ;  
a++ ;  
 } 
 return cnt ;  
}