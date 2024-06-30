// A hospital keeps a file of blood donors in which each record has the 
// format:
// Name: 20 columns
// Address: 40 columns
// Age: 2 columns
// Blood Type: 1 column (Type 1, 2, 3 or 4)
// Write a program to read the file and print a list of all blood donors 
// whose age is below 25 and whose blood type is 2.
/* To Read file in binary mode and display its contents */
# include <stdio.h>
int main( )
{
struct donors
{
char name[ 21 ] ;
char address[ 41 ] ;
int age ;
char bloodtype ;
} ;
struct donors hospital ;
FILE *fp ;
fp = fopen ( "hospital.dat", "rb" ) ; 
if ( fp == NULL )
{
puts ( "Cannot open file\n" ) ;
exit ( 1 ) ;
}
while ( fread ( &hospital, sizeof ( hospital ), 1, fp ) == 1 )
{
if ( hospital.age < 25 && hospital.bloodtype == '2' )
printf ( "%s %s %d %c\n", hospital.name, 
hospital.address, hospital.age, hospital.bloodtype ) ;
}
fclose ( fp ) ;
return 0 ;
}
