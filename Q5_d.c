#include <stdio.h>

int main() {
    int n = 0, p = 0, z = 0;
    char y;
    
    while (1) {
        int x;
        
        
        
        if (y == 'n') {
            break;
        }
        
        printf("Enter the number: ");
        scanf("%d", &x);

        if (x > 0) {
            p++;
        } else if (x < 0) {
            n++;
        } else {
            z++;
        }
        printf("Enter n to end and y to continue : ");
        scanf(" %c", &y);
    }
    
    printf("Negatives: %d\nPositives: %d\nZeroes: %d\n", n, p, z);
    
    return 0;
}
