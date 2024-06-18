#include<stdio.h>
int main()
{
    float w,h;
    printf("Weight in kg : ");
scanf("%f",&w);
printf("height in meters : ");
scanf("%f",&h);
float bmi=w/(h*h);
printf("%.2f\n",bmi);
if (bmi<15)
{
    printf("Starvation ");
}
else if (bmi>15 && bmi<17.5)
{
    printf("Anorexic ");
}
else if (bmi<18/5 && bmi>17.5)
{
    printf("Underweight ");
}
else if (bmi>18/5 && bmi<24.9)
{
    printf("Ideal ");
}
else if (bmi<29.9 && bmi>24.9)
{
    printf("overweight ");
}
else if (bmi>29.9 && bmi<40)
{
    printf("Obese ");
}
else if (bmi>40)
{
    printf("Morbidly obese ");
}


 return 0;
}