// Write a program to calculate the sum of the following series: 
// 1! 2! + 2! 3! + 3! 4! + 4! 5! + …… + 9! 10! 

#include<stdio.h>

int fact(int n){
    int i,f=1;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}

int main(){
    int i,j,sum=0;
    for(i=1;i<=9;i++){
            sum=sum+(fact(i)*fact(i+1));
    }
    printf("%d",sum);
    return 0;
}
