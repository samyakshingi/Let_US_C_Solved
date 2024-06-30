// Define a function to compute the distance between two points and 
// use it to develop another function that will compute the area of the 
// triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use 
// these functions to develop a function which returns a value 1 if the 
// point (x, y) lines inside the triangle ABC, otherwise returns a value 
// 0. Would you get any advantage if you develop these functions to 
// work on call be reference principle?

# include <stdio.h> 
# include <math.h> 
float distance ( int  x1, int  y1, int  x2, int  y2 ) ; 
float area( ) ; 
int main( ) { 
    int x1, x2, y1, y2 ; 
    float  z, x ; 
    printf ( "\nEnter the co-ordinates of two points: " ) ; 
    scanf ( "%d%d%d%d", &x1, &y1, &x2, &y2 ) ; 
    z = distance( x1, y1, x2, y2 ) ; 
    printf ( "\nDistance between Two points = %f\n", z ) ; 
    x = area( ) ; 
    printf ( "\nArea of the triangle = %f\n", x ) ; 
    return 0 ; 
} 
/* Function to calculate distance */ 
float  distance ( int x1, int y1, int x2, int y2 ) 
{ 
    float m, d ; 
    d = sqrt( pow ( ( x2 - x1 ), 2 ) + pow ( ( y2 - y1 ), 2 ) ); 
    return d ; 
} 

/* Get vertices of triangle */ 
float area( ) 
{ 
    float triarea ( float, float, float ) ; 
    float a, b, c, d ; 
    int x1, x2, x3, x4, y1, y2, y3, y4 ; 
    float area1, area2, area3, totarea ; 
    float a1, b1, c1 ; 
    printf ( "\nEnter the co-ordinates of three points: " ) ; 
    scanf ( "%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3 ) ; 
    printf ( "\nEnter the co-ordinates of one more point: " ) ; 
    scanf ( "%d%d", &x4, &y4 ) ; 
    a = distance ( x1, y1, x2, y2 ) ; 
    b = distance ( x1, y1, x3, y3 ) ; 
    c = distance ( x2, y2, x3, y3 ) ; 
    d = triarea ( a, b, c ) ; 
    a1 = distance ( x1, y1, x4, y4 ) ; 
    b1 = distance ( x2, y2, x4, y4 ) ; 
    c1 = distance ( x3, y3, x4, y4 ) ; 
    area1 = triarea ( a, a1, b1 ) ; 
    area2 = triarea ( b, a1, c1 ) ; 
    area3 = triarea ( c, b1, c1 ) ; 
    totarea = area1 + area2 + area3 ; 
    if ( ( totarea - d ) <= 0.0009 ) 
        printf ( "\nPoint  ( %d, %d ) is inside Triangle\n", x4, y4 ) ; 
    else 
        printf ( "\nPoint  ( %d, %d ) lies outside Triangle\n", x4, y4 ) ; 
    return d ; 
} 
/* Function to calculate area from a formula */ 
float triarea ( float a, float b, float c ) 
{ 
    float s, m, x ; 
    s = ( a + b + c ) / 2 ; 
    m = s * ( s - a ) * ( s - b ) * ( s - c ) ; 
    x = sqrt ( m ) ; 
    return ( x ) ; 
}
