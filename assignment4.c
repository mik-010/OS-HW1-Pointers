#include <stdio.h>

int main() {
    int value = 42;
    int *ptr = &value;
    int **dptr = &ptr;

    printf("Value using ptr: %d\n", *ptr);
    printf("Value using dptr: %d\n", **dptr);
    printf("Address stored in ptr: %p\n", (void*)ptr);
    printf("Address stored in dptr: %p\n", (void*)dptr);

    return 0;
}

