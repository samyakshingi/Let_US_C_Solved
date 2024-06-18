// The length and breadth of a rectangle and radius of a circle are 
// input through the keyboard. Write a program to calculate the area 
// and perimeter of the rectangle, and the area and circumference of 
// the circle.

#include<stdio.h>

int main(){
    int l = 0;
    int b = 0;
    int r = 0;
    printf("Enter length: ");
    scanf("%d", &l);
    printf("Enter breadth: ");
    scanf("%d", &b);
    printf("Enter area: ");
    scanf("%d", &r);
    
    printf("Area of rectangle: %d",l*b);
    printf("\n");
    printf("Area of rectangle: %d",(l+b)*2);
    printf("\n");
    printf("Area of circle: %f",3.14*(r*r));
    printf("\n");
    printf("Circumference of circle: %f",2*3.14*r);
    return 0;
}