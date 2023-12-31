#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int temp;
    int i,j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    int minIndex, temp;
    int i,j;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap arr[i] and arr[minIndex]
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Function to perform Linear Search
int linearSearch(int arr[], int n, int key) {
	int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Element found, return its index
        }
    }
    return -1; // Element not found
}

// Function to perform Binary Search (requires sorted array)
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid; // Element found, return its index
        }

        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Element not found
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    int i;
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort the array
    bubbleSort(arr, n);

    printf("Sorted array using Bubble Sort:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Selection Sort the array
    selectionSort(arr, n);

    printf("Sorted array using Selection Sort:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int searchKey;
    printf("Enter the element to search: ");
    scanf("%d", &searchKey);

    // Linear Search
    int linearResult = linearSearch(arr, n, searchKey);
    if (linearResult != -1) {
        printf("Linear Search: Element found at index %d\n", linearResult);
    } else {
        printf("Linear Search: Element not found\n");
    }

    // Binary Search (requires sorted array)
    int binaryResult = binarySearch(arr, 0, n - 1, searchKey);
    if (binaryResult != -1) {
        printf("Binary Search: Element found at index %d\n", binaryResult);
    } else {
        printf("Binary Search: Element not found\n");
    }

    int deleteIndex;
    printf("Enter the index to delete an element: ");
    scanf("%d", &deleteIndex);

    if (deleteIndex >= 0 && deleteIndex < n) {
        // Delete element at deleteIndex
        for ( i = deleteIndex; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("Array after deletion:\n");
        for ( i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Invalid index for deletion\n");
    }

    return 0;
}

