//  Write a program to check whether contents of the two files are 
// same by comparing them on a byte-by-byte basis.

#include <stdio.h> 
#include <stdlib.h> 
int  main( )  
{ 
char  ch1,ch2 ;  
FILE  *fp,*fq ;  
char  fname1[ 67 ], fname2[ 67 ] ;  
printf ( "Enter File1 name: " ) ;  
gets ( fname1 ) ;  
printf ( "Enter File2 name: " ) ;  
gets ( fname2 ) ;  
fp = fopen ( fname1, "rb" ) ;  
if ( fp == NULL )  
{  
  printf ("Unable to open file1\n" ) ; 
  exit ( 1 ) ; 
 } 
 fq = fopen ( fname2, "rb" ) ;  
 if ( fq == NULL )  
 { 
  printf ("Unable to open file2\n" ) ; 
  exit ( 1 ) ; 
 } 
 while ( 1 )  
 { 
  ch1 = getc ( fp ) ;  
  ch2 = getc ( fq ) ;  
  if ( ch1 == EOF && ch2 == EOF )  
  { 
   printf ( "File contents match" ) ;  
   break ;  
  } 
 
  if ( ch1 != ch2  ||  ch1 == EOF && ch2 != EOF  ||   
   ch1 != EOF && ch2 == EOF )  
  { 
   printf ( "File contents do not match" ) ;  
   break ;  
  } 
 } 
 fclose ( fp ) ;  
 fclose ( fq ) ;  
} 