// Write a program to count the number of occurrences of any two 
// vowels in succession in a line of text. For example, in the sentence 
// “Please read this application and give me gratuity”
// such occurrences are ea, ea, ui. 

/* Check for 2 vowels in succession */ 
# include <stdio.h> 
int main( ) 
{ 
 char  str[ 80 ] ; 
 int  count = 0 ; 
 char  *s = str ; 
 
 printf ( "\nEnter the string:\n" ) ; 
 gets ( str ) ; 
 while ( *s ) 
 { 
  if ( *s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' ) 
  { 
   s++ ; 
   if ( *s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' ||  
     *s == 'u' ) 
    count ++ ; 
  } 
  s++ ; 
 } 
 printf ( "No. of occurrences: %d\n" , count ) ; 
 return 0 ; 
} 