// Temperature of a city in Fahrenheit degrees is input through the 
// keyboard. Write a program to convert this temperature into 
// Centigrade degrees.

#include<stdio.h>

int main(){
    int t = 0;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d", &t);
    float celsius = (t - 32) * 5.0 / 9;
    printf("Temperature in C is: %f ",celsius);
    return 0;
}