// Define functions countzeros( ) and countones( ) which count 
// number of 0s and 1s in an unsigned char that they receive. Call 
// both these functions for values 101 and 111. Indicate what values 
// will these functions return?

#include <stdio.h>
#include <stdlib.h>

int ctz(unsigned char n){
    int zeros = 0;
    int i;
    for (int i = 7; i > 0;i--){
        if ((n & (1 << i)) == 0) {
            zeros++;
        }
    }
    return zeros;
}
int cto(unsigned char n){
    int ones = 0;
    int i;
    for (int i = 7; i > 0;i--){
        if ((n & (1 << i)) != 0) {
            ones++;
        }
    }
    return ones+1;
}

int main(){
    int num, zeros, ones ; 
    zeros = ctz(101) ; 
    ones = cto(101) ; 
    printf("0's = %d 1s = %d\n",zeros,ones); 
    zeros = ctz(111); 
    ones = cto(111) ; 
    printf( "0's = %d 1s = %d\n", zeros, ones); 
    return 0;
}
