// How will you use the program given below to perform the following 
// operations?
// − Copy the contents of one file into another.
// − Create a new file and add some text to it.
// − Display the contents of an existing file.
# include <stdio.h>
int main( )
{
char ch, str[ 10 ] ;
while ( ( ch = getc ( stdin ) ) != -1 )
putc ( ch, stdout ) ;
return 0 ;
}
// Answer:
// Assuming that the above program is stored in a file 'Sample.c', on 
// compilation a file 'Sample.exe' would get created. 
// To copy the contents of one file into another:
// C:>Sample.exe < trial.txt > newtrial.txt
// To create a new file and add some text to it:
// C:>Sample.exe > trial.txt
// To display the contents of an existing file:
// C:>Sample.exe < trial.txt
