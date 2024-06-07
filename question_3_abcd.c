#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main() {
    char s1[MAX_LENGTH], s2[MAX_LENGTH], s3[MAX_LENGTH], s4[MAX_LENGTH];
    int i, length;

    // Input string from the user
    printf("Enter a string: ");
    fgets(s1, sizeof(s1), stdin);
    length = strlen(s1);

    // Remove newline character from input
    if (s1[length - 1] == '\n')
        s1[length - 1] = '\0';

    // Count string length
    length = strlen(s1);
    printf("Length of the string: %d\n", length);

    // Copy s1 into s2
    strcpy(s2, s1);
    printf("Copied string (s2): %s\n", s2);

    // Replace vowels with '*'
    strcpy(s3, s1);
    for (i = 0; s3[i] != '\0'; ++i) {
        if (tolower(s3[i]) == 'a' || tolower(s3[i]) == 'e' || tolower(s3[i]) == 'i' || tolower(s3[i]) == 'o' || tolower(s3[i]) == 'u')
            s3[i] = '*';
    }
    printf("String with vowels replaced (s3): %s\n", s3);

    // Copy contents backwards from s1 to s4
    strcpy(s4, s1);
    strrev(s4);
    printf("Backwards copied string (s4): %s\n", s4);

    return 0;
}
