//  The area of a triangle can be computed by the sine law when 2 sides 
// of the triangle and the angle between them are known. 
// Area = (1 / 2 ) ab sin ( angle )
// Given the following 6 triangular pieces of land, write a program to 
// find their area and determine which is largest. 
// Plot No. a b angle 
// 1 137.4 80.9 0.78 
// 2 155.2 92.62 0.89 
// 3 149.3 97.93 1.35 
// 4 160.0 100.25 9.00 
// 5 155.6 68.95 1.25 
// 6 149.7 120.0 1.75 

# include <stdio.h> 
# include <math.h> 
int main( ) 
{ 
    float  t, a[ 6 ], b[ 6 ], angle[ 6 ], area[ 6 ], largest = 0.0 ; 
    int  i, plot ; 
    for ( i = 0 ; i <= 5 ; i++ ){ 
        printf ( "\nEnter the values of the following data:" ) ; 
        printf ( "\na%d = ", i + 1 ) ; 
        scanf ( "%f", &a[ i ] ) ; 
        printf ( "\nb%d = ", i + 1 ) ; 
        scanf ( "%f", &b[ i ] ) ; 
        printf ( "\nangle%d = ", i + 1 ) ; 
        scanf ( "%f", &angle[ i ] ) ; 
        /* Calculate area */ 
        area[ i ] = ( 1.0 / 2 ) * a[ i ] * b[ i ] * sin ( angle[ i ] ) ; 
        /* Note the largest value of area */ 
        if ( area[ i ] > largest ){ 
            largest = area[ i ] ; 
            plot = i ;  /* note the element with largest area */ 
        } 
    } 
    /* Print area of all plots */ 
    printf ( "\n\nEntered Plot dimensions and Area is:\n" ) ; 
    printf ( "\nPlot No.\ta\tb\tAngle\tArea" ) ; 

    for ( i = 0 ; i <= 5 ; i++ ){ 
        printf ( "\n%d\t\t%.2f\t%.2f\t%.2f\t%.3f ", i+1, a[ i ], b[ i ],  
        angle[ i ], area[ i ] ) ; 
    } 
    printf ( "\n\nLargest Triangular Area = %.3f:", largest ) ; 
    printf ( "\n\na = %.2f\tb = %.2f\tangle = %.2f ", a[ plot ], b[ plot ], angle[ plot ] ) ; 
    return 0 ; 
}