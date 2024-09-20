// Write a program to generate and print all unique combinations of 
// numbers 1, 2, 3 and 4.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i,j,k,l;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                for(l=0;l<n;l++){
                    if(i!=j&&i!=k&&i!=l&&j!=k&&j!=l&&k!=l)
                        printf("%d %d %d %d\n",arr[i],arr[j],arr[k],arr[l]);
                }
            }
        }
    }
    return 0;
}
