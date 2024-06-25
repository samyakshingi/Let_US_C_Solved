// Write a program to find if a square matrix is symmetric. 

#include<stdio.h>

int main(){
    int arr[3][3],i,j,count = 0;
    printf("Enter elements of 3x3 matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix entered:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }

    //checking symmetry
    for(i=0;i<3;i++){
        for(j=i;j<3;j++){
            if(arr[i][j] == arr[j][i]){
                count++;
            }
        }
    }
    printf("Count: %d",count);
    if(count==6){
        printf("Matrix is symmetric");
    }
    else{
        printf("Matrix is not symmetric");
    }
    return 0;
}