// Define a function that receives weight of a commodity in Kilograms 
// and returns the equivalent weight in Grams, Tons and Pounds. Call 
// this function from main( ) and print the results in main( ). 

#include<stdio.h>
int con(float kg, float *g, float *t, float *p){
    *g = kg * 1000;
    *t = kg / 1000;
    *p = kg * 2.20462;
}

int main(){
    float weight_kg, weight_g, weight_t, weight_p;
    printf("Enter the weight of a commodity in Kilograms: ");
    scanf("%f", &weight_kg);
    con(weight_kg, &weight_g, &weight_t, &weight_p);
    printf("Weight in Grams: %f\n", weight_g);
    printf("Weight in Tons: %f\n", weight_t);
    printf("Weight in Pounds: %f\n", weight_p);
    return 0;
}