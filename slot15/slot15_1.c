#include <stdio.h>
#include <string.h>

// Function to input n strings from the keyboard
void inputStrings(int n, char strings[][100]) {
	int i=0;
    for ( i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(strings[i], sizeof(strings[i]), stdin);
    }
}

// Function to display each string in a new line
void displayStrings(int n, char strings[][100]) {
	int i = 0;
    printf("Entered strings:\n");
    for ( i = 0; i < n; i++) {
        printf("%s", strings[i]);
    }
}



#include <stdio.h>
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	int n;
    char strings[50][100]; // Assuming each string can have up to 99 characters

    printf("Enter the number of strings (0 < n <= 50): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 50) {
        printf("Invalid input. n should be between 1 and 50.\n");
        return 1; // Exit with an error code
    }


    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    inputStrings(n, strings);
    displayStrings(n, strings);
    
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system ("pause");
    return(0);
}
    
