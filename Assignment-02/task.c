#include "stdio.h"
#include <stdlib.h>

int main(void) {
    int integer = 10;
    float number = 3.156;
    char word[] = "I'm learning C";

    printf("%d is an integer.\n", integer);
    printf("%f is a float.\n", number);
    printf("%s is a char.\n", word);

    return EXIT_SUCCESS;
}
