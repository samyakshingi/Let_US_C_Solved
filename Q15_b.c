// To uniquely identify a book a 10-digit ISBN number is used.  The 
// rightmost digit in ISBN is a checksum digit. This digit is determined 
// from the other 9 digits using the condition that d1 + 2d2 + 3d3 + ... + 
// 10d10 must be a multiple of 11 (where di denotes the ith digit from 
// the right). The checksum digit d1 can be any value from 0 to 10: the 
// ISBN convention is to use the value X to denote 10. Write a program 
// that receives a 10-digit integer, computes the checksum, and 
// reports whether the ISBN number is correct or not.

#include <stdio.h>
#include <string.h>

int main() {
    char isbn[11]; 
    int sum = 0; 

    printf("Enter the 10-digit ISBN number: ");
    scanf("%10s", isbn);

    if (strlen(isbn) != 10) {
        printf("Invalid ISBN number. It must be exactly 10 digits long.\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        int digit;

        // Check if the current character is 'X' (representing the value 10)
        if (isbn[i] == 'X' && i == 9) {
            digit = 10; // Assign the value 10 for 'X'
        } else if (isbn[i] >= '0' && isbn[i] <= '9') {
            digit = isbn[i] - '0'; // Convert the character to an integer
        } else {
            printf("Invalid character in ISBN number.\n");
            return 1;
        }

        // Compute the weighted sum
        sum += (10 - i) * digit;
    }

    // Check if the sum is a multiple of 11
    if (sum % 11 == 0) {
        printf("The ISBN number is correct.\n");
    } else {
        printf("The ISBN number is incorrect.\n");
    }

    return 0;
}
