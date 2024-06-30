// Write a program using pointers to find the smallest number in an 
// array of 25 integers. 

#include<stdio.h>

int main(){
    int arr[25];
    int i,min;
    printf("Enter 25 Numbers: ");
    for(i=0;i<25;i++){
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    for(i=0;i<25;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("Smallest number is: %d",min);
    return 0;
}