#include <stdio.h>

int main() {
    char firstName[50];
    char lastName[50];
    int c;
    int fnIndex = 0;
    int lnIndex = 0;
    int fnDone = 0;

    printf("Enter your first and last name: ");

    while ((c = getchar()) != '\n') {
        if (c == ' ' && !fnDone) {
            firstName[fnIndex] = '\0';
            fnDone = 1;  
            lnIndex = 0;      
        } else if (!fnDone) {
            firstName[fnIndex++] = c;
        } else {
            lastName[lnIndex++] = c;
        }
    }

    lastName[lnIndex] = '\0';

    printf("First Name: %s\n", firstName);
    printf("Last Name: %s\n", lastName);

    return 0;
}

