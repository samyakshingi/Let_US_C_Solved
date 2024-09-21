// Write a program that defines a function called isalpha( ). The 
// function should receive a string and check if all characters in it are 
// alphabets. If so, it should return a true, otherwise false. Call this 
// function for the following strings: 
// "NambyPamby" 
// "Mumbai – 400010"

#include <stdio.h>
#include <stdlib.h>

int isalpha(char *str){
    while(*str){
        if(*str>='a'&&*str<='z'||*str>='A'&&*str<='Z')
            str++;
        else
            return 0;
    }
    return 1;
}

int main(){
    printf ( "%d\n",isalpha("NambyPamby"));
    printf ( "%d\n",isalpha("Mumbai – 400010"));
    return 0;
}
