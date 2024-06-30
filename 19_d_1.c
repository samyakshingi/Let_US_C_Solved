// Write a program to encrypt/decrypt a file using:
// (1) Offset cipher: In an offset cipher each character from the 
// source file is offset with a fixed value and then written to the 
// target file.
// For example, if character read from the source file is ‘A’, then 
// convert this into a new character by offsetting ‘A’ by a fixed 
// value, say 128, and then writing the new character to the 
// target file.

/* Encrypt / Decrypt a file using offset cipher */
# include <stdio.h>
FILE *fs ,*ft ;
void code( ) ;
void decode( ) ;
int main ( int argc, char *argv[ ] )
{
if ( argc != 4 )
{
puts ( "Improper usage. Correct usage is:\n" ) ; 
puts ( "CH11GF1 <source file> <target file> <C/D>\n" ) ;
exit ( 1 ) ;
}
fs = fopen ( argv[ 1 ], "r" ) ;
if ( fs == NULL )
{
printf ( "Cannot open source file\n" ) ;
puts ( argv[ 1 ] ) ;
exit ( 2 ) ;
}
ft = fopen ( argv[ 2 ], "w" ) ;
if ( ft == NULL )
{
puts ( "Cannot open target file\n" ) ;
puts ( argv[ 2 ] ) ;
fclose ( fs ) ;
exit ( 3 ) ;
}
if ( *argv[ 3 ] == 'c' || *argv[ 3 ] == 'C' )
code( ) ;
else
decode( ) ;
fclose ( fs ) ;
fclose ( ft ) ;
printf ( "Mission Accomplished\n" ) ;
return 0 ;
}
void code( )
{
int ch ;
while ( ( ch = getc ( fs ) ) != EOF )
{
ch = ch + 128 ; /* encrypt */
putc ( ch, ft ) ;
}
}
void decode( )
{
int ch ;
while ( ( ch = getc ( fs ) ) != EOF )
{
ch = ch - 128 ; /* decrypt */
putc ( ch, ft ) ;
}
}
