```cpp
#include <stdio.h>

int main() {
    int a, b;
    
    // Input two integers from the keyboard
    printf("Enter the first integer (a): ");
    scanf("%d", &a);
    
    printf("Enter the second integer (b): ");
    scanf("%d", &b);
    
    // Calculate and display the results
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    
    if (b != 0) {
        // Check if b is not zero to avoid division by zero
        float quotient = (float)a / b;  // Convert one operand to float to get a floating-point result
        printf("Sum: %d\n", sum);
        printf("Difference: %d\n", difference);
        printf("Product: %d\n", product);
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Sum: %d\n", sum);
        printf("Difference: %d\n", difference);
        printf("Product: %d\n", product);
        printf("Quotient: Division by zero is not allowed.\n");
    }
    
    return 0;
}
```
