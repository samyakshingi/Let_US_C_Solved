// Write a program to multiply any two 3 x 3 matrices.

#include<stdio.h>

int main(){
    int arr1[3][3],arr2[3][3],ans[3][3],i,j,k,sum;
    printf("Enter elements of first 3x3 matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter elements of second 3x3 matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("First Matrix: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrix: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",arr2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=0;
            for(k=0;k<3;k++){
                sum+=arr1[i][k]*arr2[k][j];
                ans[i][j] = sum;
            }    
        }
    }
    printf("Answer Matrix: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}