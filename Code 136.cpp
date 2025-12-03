#include <stdio.h>

enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    enum Menu choice;
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nMenu:\n1. Add\n2. Subtract\n3. Multiply\n");
    printf("Enter your choice: ");
    scanf("%d", (int*)&choice); // reading as int

    switch(choice) {
        case ADD:
            printf("Result: %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Result: %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Result: %d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

