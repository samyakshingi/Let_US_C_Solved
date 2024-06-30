#include <stdio.h>

int main() {
    int num, remainder, octal[100], i = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Octal equivalent: 0\n");
        return 0;
    }

    while (num != 0) {
        remainder = num % 8;
        octal[i] = remainder;
        num /= 8;
        i++;
    }

    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");

    return 0;
}
