// Write macro definitions with arguments for calculation of Simple 
// Interest and Amount. Store these macro definitions in a file 
// “interest.h”. Include this file in your program, and use the macro 
// definitions for calculating Simple Interest and Amount. 

#define SI( p, n, r ) ( p * n * r / 100 ) 
#define AMT( p, SI ) ( p + SI ) 
/* Main Program to calculate simple interest and amount by 
including “interest.h” header file*/ 
# include <stdio.h> 
# include "interest.h" 
int main( ) 
{ 
int p, n ; 
float si, amt, r ; 
printf ( "\nEnter Principal, no. of years and rate of interest: " ) ; 
scanf ( "%d %d %f", &p, &n, &r ) ; 
si = SI ( p, n, r ) ; 
amt = AMT ( si, p ) ; 
printf ( "Simple interest is: %f\nAmount is: %f\n", si, amt ) ; 
return 0 ; 
} 
