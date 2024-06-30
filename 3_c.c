// Write a program to check whether a triangle is valid or not, if three 
// angles of the triangle are entered through the keyboard. A triangle 
// is valid if the sum of all the three angles is equal to 180 degrees. 

# include <stdio.h> 
int main( ) { 
    float  angle1, angle2, angle3 ; 
    printf ( "\nEnter three angles of the triangle: " ) ; 
    scanf ( "%f %f %f", &angle1, &angle2, &angle3 ) ; 
    if ( ( angle1 + angle2 + angle3 ) == 180 ) 
    printf ( "The triangle is a valid triangle\n" ) ; 
    else 
    printf ( "The triangle is an invalid triangle\n" ) ; 
    return 0 ; 
}