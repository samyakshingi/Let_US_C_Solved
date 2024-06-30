#include<stdio.h>
#include<math.h>
int main()
{
    float r,g,b;
    printf("enter rgb values : ");
scanf("%f",&r);
scanf("%f",&g);
scanf("%f",&b);

float c,m,y,k,w;
if (r/255>g/255)
{
    w=r/255;
}else{
    w=g/255;
}

if (w<b/255)
{
    w=b/255;
}


c=(w-r/255)/w;
m=(w-g/255)/w;
y=(w-b/255)/w;
k=1-w;

printf("c=%.2f m=%.2f y=%.2f k=%.2f",c,m,y,k);



 return 0;
}