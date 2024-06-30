#include<stdio.h>
int main()
{
    float h,c,t;
printf("Enter the Hardness : ");
scanf("%f",&h);
printf("Enter the carbon content : ");
scanf("%f",&c);
printf("Enter the tensile strength : ");
scanf("%f",&t);

if (h>=50 && c<=0.7 && t>=5600)
{
    printf("Grade 10");
}
else if (h>=50 && c<=0.7 && t<5600)
{
    printf("Grade 9");
}
else if (h<50 && c<=0.7 && t>=5600)
{
    printf("Grade 8");
}
else if (h>=50 && c>0.7 && t>=5600)
{
    printf("Grade 7");
}
else if (h>=50 || c<=0.7 || t>=5600)
{
    printf("Grade 6");
}
else if (h<50 && c>0.7 && t<5600)
{
    printf("Grade 5");
}

 return 0;
}