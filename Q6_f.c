// Population of a town today is 100000. The population has increased 
// steadily at the rate of 10% per year for last 10 years. Write a 
// program to determine the population at the end of each year in the 
// last decade. 

#include <stdio.h> 
#include <math.h>  
int main( ) { 
    int  pop, n ; 
    float  p, r ; 
    r = 10 ; 
    p = 100000 ; 
    for ( n = 1 ; n <= 10 ; n++ ) 
    { 
        pop = p / pow ( ( 1 + r / 100 ), n ) ; 
        printf ( "Population %d years ago = %d\n", n, pop ) ; 
    } 
    return 0 ; 
}