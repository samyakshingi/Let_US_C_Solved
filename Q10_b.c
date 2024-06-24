// Write a recursive function to obtain the running sum of first N 
// natural numbers.

#include<stdio.h>

int resum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n + resum(n-1);
    }
}

int main(){
    int n = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int res = resum(n);
    printf("Sum of %d natural numbers is: %d",n,res);
    return 0;
}