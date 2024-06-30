// Write a program that stores a set of names of individuals and 
// abbreviates the first, middle and other names except the last name 
// by their first letter. 
/*
# include <stdio.h> 
# include <string.h> 
int main( ) 
{ 
 char  str1[ 30 ], str2[ 30 ], target[ 30 ] ; 
 char lastname[ 20 ] ;
 char  *p, *token ; 
 int count, i, j ; 
 printf ( "\nEnter name, middle name and surname:\n" ) ; 
 gets ( str1 ) ;  
 strcpy ( str2, str1 ) ; 
 count = 0 ; 
 token = strtok ( str1, " " ) ; 
 while ( token != NULL ) 
 { 
  count++ ; 
  token = strtok ( NULL, " " ) ; 
 } 
   
 j = 0 ; 
 i = 0 ; 
 p = strtok ( str2, " " ) ; 
 while ( p != NULL ) 
 { 
  if ( i == count - 1 ) 
  { 
   strcpy ( lastname, p ) ; 
   target[ j ] = '\0' ; 
  } 
  else 
  { 
   target[ j ] = *p ; 
   j++ ; 
   target[ j ] = '.' ; 
   j++ ; 
  } 
  i++ ; 
  p = strtok ( NULL, " " ) ; 
 } 
 strcat ( target, lastname ) ; 
 printf ( "%s\n", target ) ; 
 return 0 ; 
} 
*/

# include <stdio.h> 
# include <string.h> 

int main(){
    char str1[20],str2[20],str3[20];
    printf("Enter name, middle name and surname:\n");
    scanf("%s %s %s",str1,str2,str3);
    printf("%c.%c.%s",str1[0],str2[0],str3);

    return 0;
}