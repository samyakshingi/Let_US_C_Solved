// Declare a structure called student containing his name, age and 
// address. Create and initialize three structure variables. Define a 
// function to which these variables are passed. The function should 
//  convert the names into uppercase. Print the resultant structure 
// variables. 

#include <stdio.h> 
#include <string.h> 
void upper ( struct stud* ) ;  
struct  stud 
{ 
char  name[ 20 ] ;  
int  age ;  
char  addr[ 40 ] ;  
} ;  
struct  stud  s1 = { "akshay", 20, "Ravinagar" }  ;  
struct  stud  s2 = { "shubham", 21, "Civil Lines" }  ;  
struct  stud  s3 = { "nilesh", 22, "Khamla" }  ;  
int main( )  
{  
upper ( &s1 ) ;  
upper ( &s2 ) ;  
upper ( &s3 ) ;  
return 0 ;  
}
void upper ( struct stud *s )  
{ 
printf ( "Before conversion:\n" ) ;  
printf ( "%s %d %s\n", s->name, s->age, s->addr ) ;  
strupr ( s->name ) ;  
printf ( "After conversion:\n" ) ;  
printf ( "%s %d %s\n", s->name, s->age, s->addr ) ;  
}  