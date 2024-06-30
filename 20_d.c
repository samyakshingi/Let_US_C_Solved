// Write a program that can be used at command prompt as a 
// calculating utility. The usage of the program is shown below.
// C> calc <switch> <n> <m>
// where, n and m are two integer operands and switch is either an 
// arithmetic operator or a comparison operator. If arithmetic 
// operator is supplied, the output should be the result of the 
// operation. If comparison operator is supplied then the output 
// should be True or False. 

/* To perform the given arithmetic operation on the two integers */
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int main ( int argc, char *argv[ ] )
{
int i, first, second, result ;
/* arithmetic and logical operators */
char *str[ ] = { "+", "-", "*", "/", "%", "<", ">", "<=", ">=", 
"==", "!=" } ;
/* check if proper no of arguments are passed */
if ( argc != 4 )
{
puts ( "Improper number of arguments\n" ) ;
exit ( 1 ) ;
}
/* check if the entered operator is valid */
for ( i = 0 ; i <= 10 ; i++ )
{
if ( strcmp ( argv[ 1 ], str[ i ] ) == 0 )
break ;
}
if ( i == 11 )
{
printf ( "\nNot a valid operator\n" ) ;
exit ( 2 ) ;
}
first = atoi ( argv[ 2 ] ) ;
second = atoi ( argv[ 3 ] ) ;
printf ( "\nResult of the operation is:\n" ) ;
switch ( i )
{
case 0 :
result = first + second ;
printf ( "%d\n", result ) ;
break ;
case 1 :
result = first - second ;
printf ( "%d\n", result ) ;
break ;
case 2 :
result = first * second ;
printf ( "%d\n", result ) ;
break ;
case 3 :
result = first / second ;
printf ( "%d\n", result ) ;
break ;
case 4 :
result = first % second ;
printf ( "%d\n", result ) ;
break ;
case 5 :
result = first < second ;
result == 0 ? printf ( "False\n" ) : printf ( "True\n" ) ;
break ;
case 6 :
result = first > second ;
result == 0 ? printf ( "False\n" ) : printf ( "True\n" ) ;
break ;
case 7 :
result = first <= second ;
result == 0 ? printf ( "False\n" ) : printf ( "True\n" ) ;
break ;
case 8 :
result = first >= second ;
result == 0 ? printf ( "False\n" ) : printf ( "True\n" ) ;
break ;
case 9 :
result = first == second ;
result == 0 ? printf ( "False\n" ) : printf ( "True\n" ) ;
break ;
case 10 :
result = first != second ;
result == 0 ? printf ( "False\n" ) : printf ( "True\n" ) ;
break ;
}
return 0 ;
}
