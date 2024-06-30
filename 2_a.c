// If a five-digit number is input through the keyboard, write a 
// program to calculate the sum of its digits. (Hint: Use the modulus 
// operator %)
#include<stdio.h>

int main(){
    int n = 0;
    int sum = 0;
    printf("Enter a five-digit number: ");
    scanf("%d", &n);
    for(int i=0;i<5;i++){
        sum += n % 10;
        n /= 10;
    }
    printf("Sum is: %d",sum);
    return 0;
};