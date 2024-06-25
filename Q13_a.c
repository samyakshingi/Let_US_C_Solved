// Twenty-five numbers are entered from the keyboard into an array. 
// Write a program to find out how many of them are positive, how 
// many are negative, how many are even and how many odd. 

#include<stdio.h>

int main(){
    int arr[25];
    printf("Enter the 25 numbers:");
    for(int i=0; i<25; i++){
        scanf("%d", &arr[i]);
    }
    int pos=0, neg=0, even=0, odd=0;
    for(int i=0;i<25;i++){
        arr[i]>0 ? pos++ : neg++;
        arr[i]%2 ? odd++ : even++;
    }
    printf ( "Negative elements = %d\n", neg ) ; 
    printf ( "Positive elements = %d\n", pos ) ; 
    printf ( "Even elements = %d\n", even ) ; 
    printf ( "Odd elements = %d\n", odd ) ; 
    return 0;
}