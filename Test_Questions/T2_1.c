// Define a function that receives 4 integers and returns sum, product 
// and average of these integers. 

#include <stdio.h> 
void calc ( int *, int *, float * ) ;  
int main( )  
{ 
int  sum, prod ;  
float  avg ;  
calc ( &sum, &prod, &avg ) ;  
printf ( "%d %d %f\n", sum, prod, avg ) ;  
return 0 ;  
}
void calc ( int *sum, int *prod, float *avg )  
{ 
int  n1, n2, n3, n4 ;  
printf ( "\n Enter four numbers :" ) ;  
scanf ( "%d%d%d%d", &n1, &n2, &n3, &n4 ) ;  
*sum = n1 + n2 + n3 + n4 ;  
*prod = n1 * n2 * n3 * n4 ;  
*avg = *sum / 4.0f ;  
}