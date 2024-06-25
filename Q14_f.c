// Write a program to add two 6 x 6 matrices. 

#include<stdio.h>

int main(){
    int arr1[6][6],arr2[6][6],ans[6][6],i,j;
    printf("Enter elements of first 6x6 matrix:\n");
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter elements of second 6x6 matrix:\n");
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("First Matrix: \n");
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("%d  ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrix: \n");
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("%d  ",arr2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
         ans[i][j] = arr1[i][j]+arr2[i][j];   
        }
    }
    printf("Answer Matrix: \n");
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("%d  ",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}