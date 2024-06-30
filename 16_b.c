// Write a program to delete all vowels from a sentence. Assume that 
// the sentence is not more than 80 characters long.

#include<stdio.h>

int main(){
    char str[80], str1[80];
    char *s,*p;
    printf("Enter string (Max 80 characters):");
    gets(str);
    s=str;
    p=str1;
    while(*s){
        if(*s=='a'|| *s=='e' || *s == 'i' || *s == 'o' || *s == 'u')
            s++;
        else if(*s=='A'|| *s=='E' || *s == 'I' || *s == 'O' || *s == 'U')
            s++;
        else
            *p++=*s++;
    }
   // *p = '\0';
    printf("Sentence after removing vovel: ");
    puts(str1);
    return 0;
}