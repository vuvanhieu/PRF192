#include <stdio.h>
#include <stdlib.h>

long long Factorial_1(int N){
	
}

void Factorial_2(int N){
	
}


int main() {
  system("cls");
    int N;
    long long factorial = 1; // Initialize factorial to 1, using long long to handle larger values
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
    while (1) {
        printf("Enter a non-negative integer 'N': ");
        scanf("%d", &N);

        if (N >= 0) {
            break; // Exit the loop if N is non-negative
        } else {
            printf("Invalid input. N must be a non-negative integer.\n");
        }
    }
    
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
    // Calculate the factorial of N
    
    //Cach 1:
    factorial = Factorial_1(N);
    
    // Display the result
    printf("The factorial of %d is: %lld\n", N, factorial);
    
	//cach 2:
	Factorial_2(N);
	
    return 0;
}
