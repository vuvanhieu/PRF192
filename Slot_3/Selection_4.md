### 3. Slot 3: Cấu trúc lựa chọn (IF ELSE)
Ex3: Tim nghiem phuong trinh bac 2

```cpp
#include <stdlib.h>
#include<stdio.h>
#include<math.h>
int main(){
    system("cls"); 
    double a, b, c, delta, x1, x2;
    scanf("%lf%lf%lf",&a, &b, &c);
    
    delta = b*b - 4*a*c;
    if(delta<0)
        printf("no slution\n");
        else if(delta == 0){
            x1 = x2 = -b/(2*a);
            printf("x1=%lf ,x2=%lf", x1,x2);
        } else {
            double can_delta = sqrt(delta);
            x1=
            x2=
        }
    system("pause");
    return 0;

}

```
