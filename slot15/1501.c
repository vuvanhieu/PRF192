#include <stdio.h>
#include <string.h>

void inputString(int n, char input[][100]) {
	int i=0;
    for ( i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(input[i], sizeof(input[i]), stdin);
    }
}

//void inputString(int n, char input[][100]) {
//	int i=0;
//    for ( i = 0; i < n; i++) {
//        printf("Enter string %d: ", i + 1);
//        scanf("%99[^\n]", input[i]);
//        while (getchar() != '\n'); 
//    }
//}


// Function to display each string in a new line
void displayString(int n, char input[][100]) {
	int i =0;
    printf("Entered strings:\n");
    for ( i = 0; i < n; i++) {
        printf("%s", input[i]);
    }
}

int main() {
	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int n;
    char input[50][100]; 
	// Fixed Do not edit anything here.
	scanf("%d", &n);
	printf("Enter the number of strings (0 < n <= 50): ");
    if (n != 1 || n <= 0 || n > 50) {
        printf("Invalid input. n should be between 1 and 50.\n");
        return 1; 
    }

    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    inputString(n, input);

	printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    displayString(n, input);

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system ("pause");
    return(0);
}

