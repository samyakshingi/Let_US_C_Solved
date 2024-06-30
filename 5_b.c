#include<stdio.h>
int asv(int x){
    int y=x;
    int sum=0;
    while(y!=0)
    {
        sum=sum+(y%10)*(y%10)*(y%10);
        y=y/10;
    }
    if (sum==x) 
    {
        return 1;
    }
    return 0;
    
    
    
}
int main()
{
    for (int i = 0; i < 501; i++)
    {
        if (asv(i))    
        {
            printf("%d\n",i);
        }
        
    }
    
 return 0;
}