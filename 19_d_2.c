// Substitution cipher: In this cipher for each character read from 
// the source file a corresponding predetermined character is 
// written to the target file.
// For example, if character ‘A’ is read from the source file, and if 
// we have decided that every ‘A’ is to be substituted by ‘!’, then
// a ‘!’ would be written to the target file in place of every ‘A’.
// Similarly, every ‘B’ would be substituted by ‘5’ and so on.

/* Encrypt / Decrypt a file using substitution cipher */
/* Type the strings in arr1 and arr2 very meticulously */
# include <stdio.h>
# include <stdlib.h>
FILE *fs, *ft ;
void code( ) ;
void decode( ) ;
int main ( int argc, char *argv[ ] )
{
if ( argc != 4 )
{
puts ( "Improper usage. Correct usage is:\n" ) ;
puts ( "CH19Bd2 <source file> <target file> C/D\n" ) ;
exit ( 1 ) ;
}
fs = fopen ( argv[ 1 ], "r" ) ;
if ( fs == NULL )
{
puts ( "Cannot open source file\n" ) ;
exit ( 2 ) ;
}
ft = fopen ( argv[ 2 ], "w" ) ;
if ( ft == NULL )
{
puts ( "Cannot open target file\n" ) ;
fclose ( fs ) ;
exit ( 3 ) ;
}
if ( *argv[ 3 ] == 'c' || *argv[ 3 ] == 'C' )
code( ) ;
else
{
if ( *argv[ 3 ] == 'd' || *argv[ 3 ] == 'D' )
decode( ) ;
else
{
fclose ( fs ) ;
fclose ( ft ) ;
puts ( "Improper usage\n" ) ;
exit ( 4 ) ;
}
}
fclose ( fs ) ;
fclose ( ft ) ;
return 0 ;
}
void code( )
{
char ch ;
int i = 0 ;
char arr1[ 97 ] = " IOP{}asdfghjkl;'ASDFGHJKL:zxcvbnm,./ZXCVBNM<>?`1234567890-=\~!@#$%^&*()_+|qwertyuiop[]QWERTYU" ;
char arr2[ 97 ] = " `1234567890-=\~!@#$%^&*()_+|qwertyuiop[]QWERTYUIOP{}asdfghjkl;'ASDFGHJKL:zxcvbnm,./ZXCVBNM<>?" ;
arr2[ 93 ] = '\\' ;
arr1[ 93 ] = '\\' ;
arr2[ 94 ] = '\"' ;
arr1[ 94 ] = '\"' ;
arr2[ 95 ] = '\n' ;
arr1[ 95 ] = '\n' ;
arr1[ 96 ] = '\t';
arr2[ 96 ] = '\t' ;
while ( ( ch = getc ( fs ) ) != EOF )
{
for ( i = 0 ; i <= 96 ; i++ )
{
if ( ch == arr1[ i ] )
break ;
}
putc ( arr2[ i ], ft ) ;
}
}
void decode( )
{
char ch ;
int i = 0 ;
char arr1[ 97 ] = " `1234567890-=\~!@#$%^&*()_+|qwertyuiop[]QWERTYUIOP{}asdfghjkl;'ASDFGHJKL:zxcvbnm,./ZXCVBNM<>?" ;
char arr2[ 97 ] = " IOP{}asdfghjkl;'ASDFGHJKL:zxcvbnm,./ZXCVBNM<>?`1234567890-=\~!@#$%^&*()_+|qwertyuiop[]QWERTYU" ;
arr1[ 93 ] = '\\' ;
arr2[ 94 ] = '\"' ;
arr1[ 94 ] = '\"' ;
arr2[ 95 ] = '\n' ;
arr1[ 95 ] = '\n' ;
arr1[ 96 ] = '\t';
arr2[ 96 ] = '\t' ;
while ( ( ch = getc ( fs ) ) != EOF )
{
for ( i = 0 ; i <= 96 ; i++ )
{
if ( ch == arr2[ i ] )
break ;
}
putc ( arr1[ i ], ft ) ;
}
}
