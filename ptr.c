#include <stdio.h>

int main()
{
    int num = 50;

    int *p;
    int **pp;

    p = &num;
    pp = &p;

    printf("Value of num = %d\n", num);
    printf("Value using *p = %d\n", *p);
    printf("Value using **pp = %d\n", **pp);

    printf("\nAddress of num = %p\n", (void*)&num);
    printf("Address stored in p = %p\n", (void*)p);
    printf("Address of pointer p = %p\n", (void*)&p);
    printf("Address stored in pp = %p\n", (void*)pp);

    return 0;
}