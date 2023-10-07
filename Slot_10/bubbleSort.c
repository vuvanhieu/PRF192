#include <stdio.h>
#include <stdlib.h>

void createData(int a[], int n) {
    int i;
    for( i = 0; i < n; i++)
        a[i] = 10 + rand() % 91;
}

void view(int a[], int n) {
	int i;
    for( i = 0; i < n; i++)
        printf("%d   ", a[i]);
    printf("\n");
}

void bubbleSort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    system("cls");
    int a[100], n = 10;
    createData(a, n);
    
    printf("\nBefore sorting:\n");
    view(a, n);
    
    printf("\nAfter sorting:\n");
    bubbleSort(a, n);
    view(a, n);
    
    printf("\n");
    return 0;
}

