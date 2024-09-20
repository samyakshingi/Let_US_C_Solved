// Dynamically allocate space for a 3-D array of dimensions 3 x 5 x 4. 
// Set up each elements of this array with a value 10. Report an error, 
// if enough memory space is not available. 
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a;
    int i, j, k;
    a = (int *)malloc(3 * 5 * 4 * (sizeof(int)));
    if(a==NULL){
        printf("Memory allocation failed\n");
    }
    for (i = 0; i < 3;i++){
        for (j = 0; j < 5;j++){
            for (k = 0; k < 4;k++){
                a[i * 5 * 4 + j * 4 + k] = 10;
                printf("%d ", *(a + i * 5 * 4 + j * 4 + k) = 10);
            }
            printf("\n");
        }
        printf("\n");
    }

        return 0;
}