```cpp
#include <stdio.h>

int main() {
    char fullName[50]; 
    int c;
    int i = 0;

    printf("Enter your full name: ");

    while ((c = getchar()) != '\n') {
        if (i < 49) { 
            fullName[i] = c;
            i++;
        }
    }

    fullName[i] = '\0';

    printf("Your full name is: %s\n", fullName);

    return 0;
}
```
