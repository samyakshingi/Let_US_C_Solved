//Write a program that prints sizes of all types of chars, ints and reals. 

#include <stdio.h> 
int main( )  
{ 
char ch ;  
unsigned char dh ;  
printf ( "character = %d\n", sizeof ( ch ) ) ;  
printf ( "unsigned character = %d\n", sizeof ( dh ) ) ;  
short int a ;  
short unsigned int b ;  
int c ;  
long int d ;  
long unsigned int e ;  
printf ( "short signed integer = %d\n", sizeof ( a ) ) ;  
printf ( "short unsigned integer = %d\n", sizeof ( b ) ) ;  
printf ( "integer = %d\n", sizeof ( c ) ) ;  
printf ( "long signed integer = %d\n", sizeof ( d ) ) ;  
printf ( "long unsigned integer = %d\n", sizeof ( e ) ) ;  
float f ;  
double g ;  
long double h ;  
printf ( "float = %d\n", sizeof ( f ) ) ;  
printf ( "double = %d\n", sizeof ( g ) ) ;  
printf ( "long double = %d\n", sizeof ( h ) ) ;  
return 0 ;  
}