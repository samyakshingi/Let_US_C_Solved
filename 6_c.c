//  When interest compounds q times per year at an annual rate of r % 
// for n years, the principal p compounds to an amount a as per the 
// following formula 
// a = p ( 1 + r / q ) nq 
// Write a program to read 10 sets of p, r, n & q and calculate the 
// corresponding as. 

# include <stdio.h> 
# include <math.h> 
int main( ) { 
    float  q, r, n, p, a ; 
    int  i ; 
    for ( i = 1 ; i <= 10 ; i++ ) 
    { 
    printf ( "\nEnter the principal amount:" ) ; 
    scanf ( "%f", &p ) ; 
    printf ( "\nEnter the rate of interest:" ) ; 
    scanf ( "%f", &r ) ; 
    printf ( "\nEnter the number of years: " ) ; 
    scanf ( "%f", &n ) ; 
    printf ( "\nEnter the compounding period: " ) ; 
    scanf ( "%f", &q ) ; 
    a = p + pow ( (1 + ( r / q ) ), ( n * q ) ) ; 
    printf ( "\n\nTotal amount = %f\n", a ) ; 
    } 
    return 0 ; 
} 