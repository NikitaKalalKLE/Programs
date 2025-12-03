#include <stdio.h>

struct Nikita {
    int roll;
    float marks;
    char name[50];
};

int main() {
    printf("Size of structure A = %lu bytes\n", sizeof(struct Nikita));
    return 0;
}
