// Write a program that will read a line and delete from it all 
// occurrences of the word ‘the’. 

#include <stdio.h>
#include <string.h>

void removeWord(char *line, const char *word) {
    char *found;
    int wordLen = strlen(word);

    while ((found = strstr(line, word)) != NULL) {
        // Shift characters to overwrite the word
        memmove(found, found + wordLen, strlen(found + wordLen) + 1);
    }
}

int main() {
    char line[100];
    printf("Enter a line: ");
    gets(line); // Note: Avoid using gets() in production code due to security risks

    removeWord(line, "the");

    printf("\nLine after removing 'the': %s\n", line);
    return 0;
}
