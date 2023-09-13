```cpp
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    system("cls"); // 

    int a, b, c;
    printf("Nhap a, b, và c:\n");
    scanf("%d%d%d", &a, &b, &c);
    float delta = (float)(b * b - 4 * a * c);
    if (delta < 0) {
        printf("Phuong trinh vo nghiem.\n");
    } else if (delta == 0) {
        printf("Phuong trinh co nghiem kep.\n");
        printf("x1 = x2 = %f\n", -b / (2.0 * a));
    } else {
        printf("Phuong trinh co hai nghiem:\n");
        float x1 = (-b - sqrt(delta)) / (2.0 * a);
        float x2 = (-b + sqrt(delta)) / (2.0 * a);
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    }
    return 0;
}
```
