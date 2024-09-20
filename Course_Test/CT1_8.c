// Define an iterative function and a recursive function to print first 
// ten terms of a Fibonacci series. Which of these two functions will 
// run faster and why?

#include <stdio.h>
#include <stdlib.h>

void itt(int n){
    int i;
    int f1=0;
    int f2=1;
    printf("%d ",f1);
    for(i=1;i<n;i++){
        printf("%d ",f2);
        int next=f1+f2;
        f1=f2;
        f2=next;
    }
}

int rec(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return rec(n-1)+rec(n-2);
}

int main(){
    int n = 10;
    itt(n);
    int i;
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d ",rec(i));
    }
    return 0;
}
