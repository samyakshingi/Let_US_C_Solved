// In an inter-college competition, various sports like cricket, 
// basketball, football, hockey, lawn tennis, table tennis, carom and 
// chess are played between different colleges. The information 
// regarding the games won by a particular college is stored in bit 
// numbers 0, 1, 2, 3, 4, 5, 6, 7 and 8 of an integer variable game. The 
// college that wins in 5 or more than 5 games is awarded the 
// Champion of Champions trophy. If a number representing the bit 
// pattern mentioned above is entered through the keyboard, then 
// write a program to find out whether the college won the Champion 
// of the Champions trophy or not, along with the names of the games 
// won by the college.

/* Determine the games won */ 
# include <stdio.h>
int main( )
{
int game ;
int cnt, count = 0 ;
printf ( "\nEnter any number: " ) ; 
scanf ( "%d", &game ) ;
/* count the no of games won */ 
for ( cnt = 1 ; cnt <= 256 ; cnt *= 2 )
{
if ( ( game & cnt ) == cnt ) /* bits 0 to 7 */ 
count++ ;
}
printf ( "Matches won by the college are: %d\n", count ) ; 
if ( count >= 5 )
{
printf ( "College won Champion of Champions trophy\n" ) ; 
printf ( "The games won by the college are:\n" ) ;
if ( ( game & 1 ) == 1 ) /* bit 0 */ 
printf ( "Cricket\n" ) ;
if ( ( game & 2 ) == 2 ) /* bit 1 */ 
printf ( "Basketball\n" ) ;
if ( ( game & 4 ) == 4 ) /* bit 2 */ 
printf ( "Football\n" ) ;
if ( ( game & 8 ) == 8 ) /* bit 3 */ 
printf ( "Hockey\n" ) ;
if ( ( game & 16 ) == 16 ) /* bit 4 */ 
printf ( "Lawn tennis\n" ) ;
if ( ( game & 32 ) == 32 ) /* bit 5 */ 
printf ( "Table tennis\n" ) ;
if ( ( game & 64 ) == 64 ) /* bit 6 */ 
printf ( "Carom\n" ) ;
if ( ( game & 128 ) == 128 ) /* bit 7 */
printf ( "Chess\n" ) ;
}
return 0 ;
}
