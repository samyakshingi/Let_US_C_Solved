// A positive integer is entered through the keyboard, write a function 
// to find the binary equivalent of this number: 
// (1) Without using recursion 
// (2) Using recursion

#include<stdio.h>

int bin(int a){
    long long bin = 0;
    int rem, i=1;
    while(a!=0){
        rem = a%2;
        a /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

int rec(int b){
    if(b==0){
        return 0;
    }
    else{
        return (b%2 + 10 * rec(b/2));
    }
}

int main(){
    int n=0;
    int res = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
//  printf("Binary equivalent: %d\n", bin(n));    without recursion
    printf("Binary equivalent: %d\n", rec(n));
    return 0;
}