#include <stdio.h>
#include <string.h>

int main() {
    char st1[100];
    char st2[100];

    scanf("%[^\n]", st1); 
    scanf("%[^\n]", st2);

    if (strcmp(st1, st2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    return 0;
}

