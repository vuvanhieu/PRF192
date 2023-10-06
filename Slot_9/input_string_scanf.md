```cpp
#include <stdio.h>

int main() {
    char fullName[7]; 

    printf("Please enter your full name: ");
    scanf("%6[^\n]", fullName); 

    printf("Your full name is: %s\n", fullName);

    return 0;
}
```
