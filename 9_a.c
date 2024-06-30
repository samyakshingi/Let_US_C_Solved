// Given three variables x, y, z write a function to circularly shift their 
// values to right. In other words, if x = 5, y = 8, z = 10, after circular 
// shift y = 5, z = 8, x =10. Call the function with variables a, b, c to 
// circularly shift values. 

#include<stdio.h>

int shift(int *x, int *y, int *z){
    int temp = 0;
    temp = *z;
    *z = *y;
    *y = *x;
    *x = temp;
}

int main(){
    int x,y,z;
    printf ( "Enter the values x, y, z:\n" ) ; 
    scanf ( "%d%d%d", &x, &y, &z ) ; 
    printf ( "\nValues of x, y & z as entered:" ) ; 
    printf ( "\nx = %d\ty = %d\tz = %d\n", x, y, z ) ; 
    shift ( &x, &y, &z ) ; 
    printf ( "\nValues of x, y & z after shifting: ") ;
    printf ( "\nx = %d\ty = %d\tz = %d\n", x, y, z ) ;
    return 0 ; 
}