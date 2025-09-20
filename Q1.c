#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if(b == 0) {
        printf("Error! Division by zero not allowed.\n");
        return 0;
    }
    return a / b;
}

int mod(int a, int b) {
    if(b == 0) {
        printf("Error! Modulus by zero not allowed.\n");
        return 0;
    }
    return a % b;
}

int main() {
    int choice, a, b;

    while(1) {  
        printf("\nMenu:\n");
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 0) {
            printf("Exiting the program. Goodbye!\n");
            break; 
        }

        if(choice >= 1 && choice <= 5) {
            printf("Enter the first number: ");
            scanf("%d", &a);
            printf("Enter the second number: ");
            scanf("%d", &b);
        }

        switch(choice) {
            case 1:
                printf("Addition of %d and %d is %d\n", a, b, add(a, b));
                break;
            case 2:
                printf("Subtraction of %d and %d is %d\n", a, b, sub(a, b));
                break;
            case 3:
                printf("Multiplication of %d and %d is %d\n", a, b, mul(a, b));
                break;
            case 4:
                printf("Division of %d and %d is %d\n", a, b, divide(a, b));
                break;
            case 5:
                printf("Modulus of %d and %d is %d\n", a, b, mod(a, b));
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

