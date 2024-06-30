// Assume that a Master file contains two fields—roll number and 
// name of the student. At the end of the year, a set of students join 
// the class and another set leaves. A Transaction file contains the roll 
// numbers and an appropriate code to add or delete a student.
// Write a program to create another file that contains the updated 
// list of names and roll numbers. Assume that the Master file and the
// Transaction file are arranged in ascending order by roll numbers. 
// The updated file should also be in ascending order by roll numbers.
/* Create an updated file from Master & Transaction File */
# include <stdio.h>
# include <stdlib.h>
int main( )
{
FILE *mf, *tf, *uf ;
struct master /* Master file structure */
{
int rollno ;
char name[ 20 ] ;
} ;
struct transaction /* Transaction file structure */
{
char code ;
int rollup ;
char name1[ 20 ] ;
} ;
struct master student, newstudent ;
struct transaction add_del ;
int msz = sizeof ( struct master ) ;
mf = fopen ( "master.dat", "r" ) ; 
if ( mf == NULL )
{
puts ( "Unable to open master file\n" ) ;
exit ( 1 ) ;
}
tf = fopen ( "transact.dat", "r" ) ; 
if ( tf == NULL )
{
puts ( "Unable to open transaction file\n" ) ;
fclose ( mf ) ;
exit ( 2 ) ;
}
uf = fopen ( "updated.dat", "w+" ) ;
if ( uf == NULL )
{
puts ( "Unable to create updated file\n" ) ;
fclose ( mf ) ;
fclose ( tf ) ;
exit ( 3 ) ;
}
while ( fread ( &add_del, sizeof ( struct transaction ), 1, tf ) == 1 )
{
fread ( &student, msz, 1, mf ) ;
/* if code = d, don't do anything */
if ( add_del.code == 'd' )
{
if ( student.rollno == add_del.rollup )
continue ;
else
{
/* code != d, write to updated file from master file */
while ( student.rollno != add_del.rollup )
{
fwrite ( &student, msz, 1, uf ) ;
fread ( &student, msz, 1, mf ) ;
}
}
continue ;
}
/* write all records from master file to updated file where 
 roll no of master file < roll no of transaction file */
while ( student.rollno < add_del.rollup )
{
fwrite ( &student, msz, 1, uf ) ;
fread ( &student, msz, 1, mf ) ;
}
/* copy record from transaction file to updated file where 
 code != d ( new student has to be added ) */
newstudent.rollno = add_del.rollup ;
strcpy ( newstudent.name, add_del.name1 ) ;
fwrite ( &newstudent, msz, 1, uf ) ;
fseek ( mf,-msz, SEEK_CUR ) ;
} /* end of while loop */
/* write rest of the records from master file to updated file for 
which there is no matching record in transaction file */
while ( fread ( &student, msz, 1, mf ) == 1 )
fwrite ( &student, msz, 1, uf ) ;
fclose ( mf ) ;
fclose ( tf ) ;
fclose ( uf ) ;
printf ( "Updated file saved\n" ) ;
return 0 ;
}
