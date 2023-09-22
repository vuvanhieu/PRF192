## Function and Libraries
1. Viết hàm tính tổng của hai số nguyên nhập từ bàn phím.

B1: Tao thu muc Sum
B2: Tạo file thu viện tính tổng: tong.h trong thư mục Sum

```cpp
#ifndef TONG_H
#define TONG_H

int sum(int a, int b);
#endif
```
B3: Tao file tong.c trong thư mục Sum
```cpp
#include "tong.h"

int sum(int a, int b){
    return a+b;
}
```

B4: Tao file tong_hai_so.c (co ham main) de goi ham sum(a,b) da xay dung 
```cpp
#include<stdio.h>
#include "tong.h"

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int result = sum(a,b);
    printf("sum(%d,%d)=%d", a, b, result);
    getchar();
    return 0;
}
```
