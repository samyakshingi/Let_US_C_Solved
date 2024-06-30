// How will you initialize a three-dimensional array threed[3][2][3]? 
// How will you refer the first and last element in this array? 

#include<stdio.h>

int main(){
    int threed[3][2][3] = {{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}},{{13,14,15},{16,17,18}}};

    // first element: thread[0][0][0]    OR     ***thread
    //last element: thread[2][1][2]    OR       *(*(*(thread+2)+1)+2)




    return 0;
}