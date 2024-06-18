#include<stdio.h>
int main()
{
    
    for (int i = 0; i <= 255; i++)
    {
        char c = (char) i;
        printf("character c = %c , ascii value = %d\n",c,i);
    }
    

 return 0;
}