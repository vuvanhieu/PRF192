```cpp
#include <stdio.h>
#include <stdlib.h>


void input(float a[], int *n) {
	// Nhap mang a co kich co luu tai dia chi n
}

void display(float a[], int n) {
	// Hien thi mang a co kich co n
}

int main() {
    system("cls");
    float a[100];
    int n;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Input numbers\n");
        printf("2. Display numbers\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                input(a, &n);
                break;
            case 2:
                display(a, n);
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}


```
