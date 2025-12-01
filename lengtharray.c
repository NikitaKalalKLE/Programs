#include <stdio.h>

int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    char charArr[] = "Hello";

    int intLength = sizeof(intArr) / sizeof(intArr[0]);
    int charLength = sizeof(charArr) - 1;  // subtract 1 to ignore '\0'

    printf("Length of integer array = %d\n", intLength);
    printf("Length of character array = %d\n", charLength);

    return 0;
}
