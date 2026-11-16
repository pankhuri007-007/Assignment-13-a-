#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p;

    p = arr;

    printf("Initial pointer: %p\n", (void*)p);

    p++;
    printf("After p++: %p\n", (void*)p);

    p--;
    printf("After p--: %p\n", (void*)p);

    p = p + 2;
    printf("After p+2: %p\n", (void*)p);

    p = p - 1;
    printf("After p-1: %p\n", (void*)p);

    return 0;
}