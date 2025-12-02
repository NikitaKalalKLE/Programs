#include <stdio.h>

int main() {
    char arr[100];
    int freq[256] = {0};     // frequency table for all ASCII characters

    printf("Enter characters (string): ");
    scanf("%s", arr);        // reads until space

    // Count occurrences
    for (int i = 0; arr[i] != '\0'; i++) {
        freq[(unsigned char)arr[i]]++;
    }

    // Display results
    printf("\nCharacter occurrences:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' occurs %d times\n", i, freq[i]);
        }
    }

    return 0;
}
