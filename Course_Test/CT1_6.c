// Define a function called showbits( ) which displays all the bits of an 
// unsigned char that it receives. Call this function for values 45 and 
// 30. Indicate what output will showbits( ) produce for these values?

#include <stdio.h>
#include <stdlib.h>

void showbits(unsigned char n){
    int i;
    for (i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main(){
    unsigned char c;
    c = 45;
    showbits(c);
    c = 30;
    showbits(c);
    return 0;
}
