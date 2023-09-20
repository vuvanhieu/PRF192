#include <stdio.h>

int main() {
    int age;

    // Prompt the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check the age using if-else if structure
    if (age < 0) {
        printf("Invalid age! Age cannot be negative.\n");
    } else if (age < 18) {
        printf("You are a minor.\n");
    } else if (age < 65) {
        printf("You are an adult.\n");
    } else {
        printf("You are a senior citizen.\n");
    }

    return 0;
}

