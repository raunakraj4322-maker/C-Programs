#include <stdio.h>

int main() {
    int a, b, choice;
    
    printf("--- Calculator Menu ---\n");
    printf("1. Add (+)\n2. Subtract (-)\n3. Multiply (*)\n4. Divide (/)\n5. Remainder (%%)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    switch(choice) {
        case 1:
            printf("Result: %d + %d = %d\n", a, b, a + b);
            break;
        case 2:
            printf("Result: %d - %d = %d\n", a, b, a - b);
            break;
        case 3:
            printf("Result: %d * %d = %d\n", a, b, a * b);
            break;
        case 4:
            if (b != 0)
                // We use (float) to get a decimal answer for division
                printf("Result: %d / %d = %.2f\n", a, b, (float)a / b);
            else
                printf("ERROR: Division by zero is undefined.\n");
            break;
        case 5:
            if (b != 0)
                printf("Result: %d %% %d = %d\n", a, b, a % b);
            else
                printf("ERROR: Cannot find remainder of division by zero.\n");
            break;
        default:
            printf("Invalid choice! Please run the program again and select 1-5.\n");
    }
    
    return 0;
}
// Author : [ Raunak Raj ]
