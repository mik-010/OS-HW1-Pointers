#include <stdio.h>

int main() {
    int num = 10;          
    int *ptr = &num;       

    printf("Address of num using &: %p\n", (void*)&num);
    printf("Address of num using ptr: %p\n", (void*)ptr);
    printf("Value of num using pointer: %d\n", *ptr);

    *ptr = 20;
    printf("Modified value of num: %d\n", num);

    return 0;
}

