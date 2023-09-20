//Tinh tong, hieu, tich, 
//thuong cua hai so nguyen


#include <stdio.h>

void sumN1(int a, int b){
	int sum = a + b;
	
	printf("Tong cua a va b = %d", sum);
	//return sum;
}

void sumN2(int a, int b){
	int sum = a + b;
	return sum;
}

int main() {
    int a, b;
    
    // Input two integers from the keyboard
    printf("Enter the first integer (a): ");
    scanf("%d", &a);
    
    printf("Enter the second integer (b): ");
    scanf("%d", &b);2
    
    // Calculate and display the results
	int sum = sumN2(a, b);
	
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

