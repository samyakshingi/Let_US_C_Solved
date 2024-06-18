// A five-digit number is entered through the keyboard. Write a 
// program to obtain the reversed number and to determine whether 
// the original and reversed numbers are equal or not.

#include<stdio.h>
#include<math.h>

int main(){
    int n=0;
    printf("Enter a 5 digit number: ");
    scanf("%d",&n);
    int reversed = 0;
    int original = n;
    while(n != 0){
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    printf("reversed number is: %d",reversed);
    if(original == reversed){
        printf("\nOriginal and reversed numbers are equal.");
    }
    else{
        printf("\nOriginal and reversed numbers are not equal.");
    }
    return 0;
}