// Define a function that compares two given dates. To store a date,
// use a structure that contains three members namely day, month 
// and year. If the dates are equal the function should return 0, 
// otherwise it should return 1.

# include <stdio.h>
# include <stdlib.h>
struct date
{
int day, month, year ;
} ;
int check_date ( struct date *dt ) ;
int main( )
{
int chkdt ;
struct date d1, d2 ;
printf ( "\nEnter the dates to be compared: " ) ;
chkdt = check_date ( &d1 ) ;
if ( chkdt == 0 )
exit ( 0 ) ;
fflush ( stdin ) ;
chkdt = check_date ( &d2 ) ;
if ( chkdt == 0 )
exit ( 0 ) ;
if ( ( d1.day == d2.day ) && ( d1.month == d2.month ) 
&& ( d1.year == d2.year ) )
printf ( "\nDates are Equal" ) ;
else
printf ( "\nDates are Unequal" ) ;
return 0 ;
}
int check_date ( struct date *dt )
{
printf ( "\nEnter date (dd): " ) ;
scanf ( "%d", &dt -> day ) ;
printf ( "\nEnter month (mm): " ) ;
scanf ( "%d", &dt -> month ) ;
printf ( "\nEnter year (yyyy): " ) ;
scanf ( "%d", &dt -> year ) ;
if ( ( dt -> day > 31 || dt -> day < 0 ) || 
( dt -> month > 12 || dt -> month < 0 ) || 
( dt -> year > 9999 || dt -> year < 1000 ) )
{
printf ( "\nImproper date entered" ) ;
return ( 0 ) ;
}
else
return ( 1 ) ;
}

