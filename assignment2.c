#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    printf("Original array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));  
    }

    for (int i = 0; i < 5; i++) {
        *(ptr + i) *= 2;  
    }

    printf("\nModified array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

