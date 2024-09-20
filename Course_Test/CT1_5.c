// Define an enumeration to represent colors red, green, yellow, 
// magenta and brown. Create two variables Apple and Banana of this 
// enum type and assign colors red and yellow to them respectively. 
// Print these color values and indicate what output will they produce.  

#include <stdio.h>
#include <stdlib.h>

enum col {
    red, green, yellow, magenta, brown
};

int main(){
    enum col apple;
    enum col banana;
    apple = red;
    banana = yellow;
    printf("%d\n", apple);
    printf("%d\n", banana);
    return 0;
}