// Paper of size A0 has dimensions 1189 mm x 841 mm. Each 
// subsequent size A(n) is defined as A(n-1) cut in half, parallel to its 
// shorter sides. Thus, paper of size A1 would have dimensions 841 
// mm x 594 mm. Write a program to calculate and print paper sizes 
// A0, A1, A2, … A8. 

# include <stdio.h> 
    int main( ) 
    { 
    int  a0ht, a0wd ; 
    int  a1ht, a1wd, a2ht, a2wd, a3ht, a3wd, a4ht, a4wd ; 
    int  a5ht, a5wd, a6ht, a6wd, a7ht, a7wd, a8ht, a8wd ; 
        a0ht = 1189 ;  a0wd = 841 ; 
        printf ( "Size of A0 paper Ht = %d Width = %d\n", a0ht, a0wd ) ; 
        a1ht = a0wd ;  a1wd = a0ht / 2 ; 
        printf ( "Size of A1 paper Ht = %d Width = %d\n", a1ht, a1wd ) ; 
        a2ht = a1wd ;  a2wd = a1ht / 2 ; 
        printf ( "Size of A2 paper Ht = %d Width = %d\n", a2ht, a2wd ) ; 
        a3ht = a2wd ;  a3wd = a2ht / 2 ; 
        printf ( "Size of A3 paper Ht = %d Width = %d\n", a3ht, a3wd ) ; 
        a4ht = a3wd ;  a4wd = a3ht / 2 ; 
        printf ( "Size of A4 paper Ht = %d Width = %d\n", a4ht, a4wd ) ; 
        a5ht = a4wd ;  a5wd = a4ht / 2 ; 
        printf ( "Size of A5 paper Ht = %d Width = %d\n", a5ht, a5wd ) ; 
        a6ht = a5wd ;  a6wd = a5ht / 2 ; 
        printf ( "Size of A6 paper Ht = %d Width = %d\n", a6ht, a6wd ) ; 
        a7ht = a6wd ;  a7wd = a6ht / 2 ; 
        printf ( "Size of A7 paper Ht = %d Width = %d\n", a7ht, a7wd ) ; 
        a8ht = a7wd ;  a8wd = a7ht / 2 ; 
        printf ( "Size of A8 paper Ht = %d Width = %d\n", a8ht, a8wd ) ; 
    return 0 ; 
    }