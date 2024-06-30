// Given the coordinates (x, y) of center of a circle and its radius, write 
// a program that will determine whether a point lies inside the circle, 
// on the circle or outside the circle. (Hint: Use sqrt( ) and pow( ) 
// functions) 

# include <stdio.h> 
int main( ) { 
    int  x, y, r ; 
    int  dis, d ; 
    printf ( "\nEnter radius of circle& coordinates of point ( x, y ): " ) ; 
    scanf ( "%d %d %d", &r, &x, &y ) ; 
    dis = x * x + y * y ;  /* or use pow( ) function*/ 
    d = r * r ; 
    if ( dis == d ) {
    printf ( "Point is on the circle\n" ) ; 
    }
    else{
        if ( dis > d ){ 
            printf ( "Point is outside the circle\n" ) ;
        } 
        else{
            printf ( "Point is inside the circle\n" ) ; 
        } 
    }
    return 0 ; 
} 