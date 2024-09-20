// Create an array of pointers to strings for storing names of 5 
// persons. What is the limitation of this array? 
#include <stdio.h>
#include <stdlib.h>

int main(){
    char *names[5]; // array of 5 pointers to char
    names[0] = "John";
    names[1] = "Mary";
    names[2] = "David";
    names[3] = "Peter";
    names[4] = "Lucy";

    for (int i = 0; i < 5; i++){
        printf("%s\n", names[i]);
    }
        return 0;
}

//we cannot take input to these strings using scanf function