// Write a program which to find the grace marks for a student using 
// switch. The user should enter the class obtained by the student and 
// the number of subjects he has failed in. Use the following logic: 
 
// − If the student gets first class and he fails in more than 3 
// subjects, he does not get any grace. Otherwise, he gets a grace 
// of 5 marks per subject. 
 
// − If the student gets second class and he fails in more than 2 
// subjects, he does not get any grace. Otherwise, he gets a grace 
// of 4 marks per subject. 
 
// − If the student gets third class and he fails in more than 1 
// subject, then he does not get any grace. Otherwise, he gets a 
// grace of 5 marks. 

# include <stdio.h> 
 
int main( ) 
{ 
 int  c, sub ; 
 
 printf ( "\nEnter the class and number of subjects failed: " ) ; 
 scanf ( "%d %d", &c, &sub ) ; 
 
 switch ( c ) 
 { 
  case 1 : 
   if ( sub <= 3 ) 
    printf ( "Student gets total of %d grace marks\n",5 * sub ) ; 
   else 
    printf ( "No grace marks\n" ) ; 
   break ; 
 
  case 2 : 
   if ( sub <= 2 ) 
    printf ( "Student gets total of %d grace marks\n",4 * sub ) ; 
   else 
    printf ( "No grace marks\n" ) ; 
   break ; 
 
  case 3 : 
   if ( sub == 1 ) 
    printf ( "Student gets 5 grace marks\n" ) ; 
   else 
 printf ( "No grace marks\n" ) ; 
break ; 
default : 
printf ( "Wrong class entered\n" ) ; 
} 
return 0 ; 
} 

