#include <stdio.h>

void inputtArray(int arr[], int size) {
	int i;
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}


void selectSort(int arr[], int size) {
	int i,j;
    for (i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int choice, size;

    printf("Enter the size of the integer array: ");
    scanf("%d", &size);

    int arr[size];

    do {
        printf("\nMenu:\n");
        printf("1. Import an integer array\n");
        printf("2. Perform Selection Sort\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputtArray(arr, size);
                break;
            case 2:
                if (size == 0) {
                    printf("Array is empty. Import an array first.\n");
                } else {
                    selectSort(arr, size);
                    printf("Array after sorting:\n");
                    int i;
                    for (i = 0; i < size; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 3);

    return 0;
}

