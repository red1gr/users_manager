#include <stdio.h>
#include "math_tools.h"

void mathMenu() {
    int choice, a, b;

    printf("\n1. Add\n2. Multiply\nChoose: ");
    scanf("%d", &choice);

    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);

    if (choice == 1)
        printf("Result: %d\n", a + b);
    else if (choice == 2)
        printf("Result: %d\n", a * b);
}
