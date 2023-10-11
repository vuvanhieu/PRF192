### Slot 11: Pointer (Con trỏ)
Test1: Nhập mảng arr các số nguyên sử dụng con trỏ. In lên màn hình hai dòng: dòng 1 là các số chẵn, dòng 2 là các số lẻ

Test2: Nhập mảng arr1, arr2 các số nguyên sử dụng con trỏ. Sau đó gán mảng arr3 bằng tổng hai phần tử của arr1 và arr2. In lên màn hình gồm 3 dòng dữ liệu của arr1, arr2 và arr3.

Ví dụ 4: Nhập mảng arr hai chiều và hiển thị lên màn hình.

```cpp
#include <stdio.h>
#include <stdlib.h>
int main() {
    system("cls");
    int rows, cols, i,j;
    prinf("Input row number:"); scanf("%d", rows);
    prinf("Input col number:"); scanf("%d", cols);
    int **arr = (int **)malloc(rows * sizeof(int *));
    for(i=0; i<rows; i++){
        arr[i] = (int *)malloc(cols * sizeof(int));
    }
    printf("\Input:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    free(arr); 
    system("pause");
    return 0;
}


```




