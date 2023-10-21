#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//void inputString(int n, char* input) {
//    fgets(input, n, stdin);
//    if (input[strlen(str) - 1] == '\n') {
//        input[strlen(str) - 1] = '\0';
//    }
//}

void inputString(int n, char input[]) {
    fgets(input, n, stdin);
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }
}


// Function to check if a string is symmetric
bool isSymmetric(const char* str) {
	int i = 0;
    int length = strlen(str);
    for ( i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return false; // Not symmetric
        }
    }
    return true; // Symmetric
}

int main() {
	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
    char input[100]; 

    inputString(sizeof(input), input);

	// Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    
    if (isSymmetric(input)) {
        printf("The string is symmetric.\n");
    } else {
        printf("The string is not symmetric.\n");
    }

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system ("pause");
    return(0);
}

