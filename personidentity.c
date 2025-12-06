#include <stdio.h>
#include <string.h>

int main() {
    char first[50], last[50], fullName[100];

    // Read first name
    printf("Enter first name: ");
    scanf("%s", first);

    // Read last name
    printf("Enter last name: ");
    scanf("%s", last);

    // Display entered names
    printf("\nFirst Name: %s\n", first);
    printf("Last Name: %s\n", last);

    // Store into another array (full name)
    strcpy(fullName, first);     // copy first name
    strcat(fullName, " ");       // add space
    strcat(fullName, last);      // add last name

    // Display full name
    printf("\nFull Name Stored in Another Array: %s\n", fullName);

    return 0;
}
