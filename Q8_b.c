// A positive integer is entered through the keyboard. Write a function 
// to obtain the prime factors of this number. 
// For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime 
// factors of 35 are 5 and 7. 

# include <stdio.h> 
void prime ( int ) ; 
int main( ) {
    int  num ; 
    printf ( "Enter number:" ) ; 
    scanf ( "%d", &num ) ; 
    prime ( num ) ;  /* Function call */ 
    return 0 ; 
}
void prime ( int num ) 
{ 
int  i = 2 ; 
printf ( "Prime factors of %d are ", num ) ; 
    while ( num != 1 ) { 
        if ( num % i == 0 ) 
            printf ( "%d ", i ) ; 
        else{ 
            i++ ; 
            continue ; 
        }
        num = num / i ; 
    } 
} 

