//  Define macros for calculating area of circle, circumference of circle, 
// volume of a cone and volume of sphere. 
 
#include <stdio.h> 
#define PI  3.14f 
#define ACI( r ) ( PI * r * r )  
#define CCI( r ) ( 2 * PI * r )  
#define VCO( r ) ( ( 1.0f / 3 ) * PI * r * r * r )  
#define VCYL( r ) ( ( 4.0f / 3 ) * PI * r * r * r )  
int main( )  
{ 
 float  r, a_ci, c_ci, v_co, v_cyl ;  
 printf ( "\n Enter the value of r :\n" ) ;  
 scanf ( "%f", &r ) ;  
 a_ci = ACI ( r ) ;  
 c_ci = CCI ( r ) ;  
 printf ( "\nArea of circle : %f", a_ci ) ;  
 printf ( "\nCircumference of circle : %f", c_ci ) ;  
 v_co = VCO ( r ) ;  
 v_cyl = VCYL ( r ) ;  
 printf ( "\n Volume of cone : %f",v_co ) ;  
 printf ( "\n Volume of cylinder : %f", v_cyl ) ;  
 return 0 ;  
}