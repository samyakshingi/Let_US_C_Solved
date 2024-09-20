// Create a data structure for storing following data: 
// Name of the fruit 
// Color of the fruit 
// Diameter of the fruit 
// Price of the fruit 
// Weight of the fruit 

#include <stdio.h>
#include <stdlib.h>

struct fr{
    char name[20];
    char color[20];
    float diameter;
    float price;
    float weight;
};

int main(){
    struct fr f1;
    printf("Enter the name of the fruit: ");
    scanf("%s",f1.name);
    printf("Enter the color of the fruit: ");
    scanf("%s",f1.color);
    printf("Enter the diameter of the fruit: ");
    scanf("%f",&f1.diameter);
    printf("Enter the price of the fruit: ");
    scanf("%f",&f1.price);
    printf("Enter the weight of the fruit: ");
    scanf("%f",&f1.weight);


    printf("\nName of the fruit: %s\n",f1.name);
    printf("Color of the fruit: %s\n",f1.color);
    printf("Diameter of the fruit: %.2f\n",f1.diameter);
    printf("Price of the fruit: %.2f\n",f1.price);
    printf("Weight of the fruit: %.2f\n",f1.weight);
    return 0;
}