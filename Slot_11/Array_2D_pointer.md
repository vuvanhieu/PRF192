### Slot 11: Pointer (Con trỏ)

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




