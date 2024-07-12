#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    gets(str);  // Read input string

    // Loop through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is a vowel
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;  // Increment the vowel count
        }
    }

    printf("Number of vowels in the string: %d\n", count);

    return 0;
}
