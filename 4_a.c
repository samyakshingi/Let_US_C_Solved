#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter all the sides : ");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if (a*a+b*b==c*c || a*a+c*c==b*b || c*c+b*b==a*a)
{
    printf("Right angle triangle ");
}

else if (a==b && b==c)
{
    printf("Equilateral triangle ");
}
else if (a!=b && b!=c)
{
    printf("Scalene triangle ");
}
else 
{
    printf("Isosceles triangle triangle ");
}



 return 0;
}