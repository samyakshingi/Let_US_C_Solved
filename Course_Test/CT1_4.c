// Write a program that defines a function called isalnum( ). The 
// function should receive a string and check if all characters in it are 
// alphabets or digits. If so, it should return a true, otherwise false. 
// Call this function for the following strings: 
// "ABCD1234" 
// "Nagpur – 440010" 

#include <stdio.h>
#include <stdlib.h>

int isalnum(char *str){
    int i=0;
    while(*str){
        if(*str>='a'&&*str<='z'||*str>='A'&&*str<='Z'||*str>='0'&&*str<='9'){
            str++;
        }
        else
            return 0;
    }
    return 1;
}

int main(){
    char *str;
    str = (char*)malloc(100 * sizeof(char));
    strcpy(str, "ABCD1234");
    printf("%d\n", isalnum(str));
    free(str);
    str = (char*)malloc(100 * sizeof(char));
    strcpy(str, "Nagpur – 440010");
    printf("%d\n", isalnum(str));
    free(str);

    return 0;
}