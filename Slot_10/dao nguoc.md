```cpp
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
	char temp[100];
    printf("Nhap ten: ");
    gets(name);

	int i,j=0;
	int length = strlen(name);
    for (i = length-1; i >= 0; i--) {
        temp[j] = name[i];
		j++;
    }

    printf("Chuoi dao nguoc: %s\n", temp);

    return 0;
}
```
