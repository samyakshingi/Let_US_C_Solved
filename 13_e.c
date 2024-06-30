// Write a program which performs the following tasks: 
// − initialize an integer array of 10 elements in main( ) 
// − pass the entire array to a function modify( ) 
// − in modify( ) multiply each element of array by 3 
// − return the control to main( ) and print the new array elements 
// in main( ) 

#include<stdio.h>

void modify(int *arr){
    for(int i=0; i<10; i++){
        arr[i] *= 3;
    }
}

int main(){
    int arr[10];
    printf("Enter 10 numbers: ");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    modify(arr);
    printf("Number after multiplying by 3 are: ");
    for(int i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}