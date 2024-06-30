// Given a list of names of students in a class, write a program to store 
// the names in a file on disk. Make a provision to display the n
// th name 
// in the list, where n is read from the keyboard.
/* Create a file on disk, retrieve data as required */
# include <stdio.h>
int main( )
{
FILE *fp ;
char name[ 21 ], ch, another = 'y' ;
int num, n ;
fp = fopen ( "student.dat", "w+" ) ; 
if ( fp == NULL )
{
puts ( "Unable to create file\n" ) ;
exit ( 1 ) ;
}
/* Loop for data entry */
while ( another == 'y' || another == 'Y' )
{
puts ( "\nEnter the name of student: " ) ;
gets ( name ) ;
fputs ( name, fp ) ; /* write data to file */
fputs ( "\n", fp ) ; /* add newline character at the end 
 of record */
puts ( "Do you want to add more names y/n" ) ;
fflush ( stdin ) ;
another = getch( ) ;
}
fseek ( fp, 0L, SEEK_SET ) ; /* File pointer reset to start of file */
puts ( "\nEnter any number from the list" ) ;
scanf ( "%d", &num ) ;
n = num ;
while ( fgets ( name, 21, fp ) != NULL )
{
num-- ; /* count downwords to reach the required record */
if ( num == 0 )
printf ( "\nName of student no. %d is: %s\n", n, name ) ;
}
if ( num > 0 )
puts ( "No such number exists in the list\n" ) ;
fseek ( fp, 0L, SEEK_SET ) ; /* reset file pointer */
puts ( "\nList of students whose name starts with S: " ) ;
while ( fgets ( name, 21, fp ) != NULL )
{
if ( name[ 0 ] == 's' || name[ 0 ] == 'S' )
printf ( "%s", name ) ;
}
fclose ( fp ) ;
return 0 ;
}
