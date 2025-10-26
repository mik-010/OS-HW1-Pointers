#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *p = str;
    int count = 0;

    printf("String printed using pointer:\n");
    while (*p != '\0') {
        printf("%c", *p);
        p++;
        count++;
    }

    printf("\nNumber of characters: %d\n", count);
    return 0;
}

