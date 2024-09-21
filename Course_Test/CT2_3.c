// Define an enumeration to represent marital status of a person—
//  single, married, divorced. Create two variables he and she of this 
// enum type and assign to them values single and married 
// respectively. Print these values and indicate what output will they 
// produce. 

#include <stdio.h>
#include <stdlib.h>

enum status{
    single, married, divorced
};

int main(){
    enum status he, she;
    he = single;
    she = married;

    printf ( "%d\n",he);
    printf ( "%d\n",she);
    return 0;
}
